use std::rc::Rc;

use hyper;
use super::configuration::Configuration;

pub struct APIClient {
    default_api: Box<dyn crate::apis::DefaultApi>,
    log_api: Box<dyn crate::apis::LogApi>,
    subsystem_api: Box<dyn crate::apis::SubsystemApi>,
    tag_api: Box<dyn crate::apis::TagApi>,
}

impl APIClient {
    pub fn new<C: hyper::client::Connect>(configuration: Configuration<C>) -> APIClient {
        let rc = Rc::new(configuration);

        APIClient {
            default_api: Box::new(crate::apis::DefaultApiClient::new(rc.clone())),
            log_api: Box::new(crate::apis::LogApiClient::new(rc.clone())),
            subsystem_api: Box::new(crate::apis::SubsystemApiClient::new(rc.clone())),
            tag_api: Box::new(crate::apis::TagApiClient::new(rc.clone())),
        }
    }

    pub fn default_api(&self) -> &dyn crate::apis::DefaultApi{
        self.default_api.as_ref()
    }

    pub fn log_api(&self) -> &dyn crate::apis::LogApi{
        self.log_api.as_ref()
    }

    pub fn subsystem_api(&self) -> &dyn crate::apis::SubsystemApi{
        self.subsystem_api.as_ref()
    }

    pub fn tag_api(&self) -> &dyn crate::apis::TagApi{
        self.tag_api.as_ref()
    }

}
