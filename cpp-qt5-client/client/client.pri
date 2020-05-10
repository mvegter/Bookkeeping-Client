QT += network

HEADERS += \
# Models
    $${PWD}/OAIApiInformation.h \
    $${PWD}/OAIDataResponse.h \
    $${PWD}/OAIDeployInformation.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAIErrorResponse.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h

SOURCES += \
# Models
    $${PWD}/OAIApiInformation.cpp \
    $${PWD}/OAIDataResponse.cpp \
    $${PWD}/OAIDeployInformation.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIErrorResponse.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

