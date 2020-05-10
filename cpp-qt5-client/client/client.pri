QT += network

HEADERS += \
# Models
    $${PWD}/OAIApiInformation.h \
    $${PWD}/OAIArrayOfLogsResponse.h \
    $${PWD}/OAIDeployInformation.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAIErrors.h \
    $${PWD}/OAILog.h \
    $${PWD}/OAILogResponse.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
    $${PWD}/OAILogApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h

SOURCES += \
# Models
    $${PWD}/OAIApiInformation.cpp \
    $${PWD}/OAIArrayOfLogsResponse.cpp \
    $${PWD}/OAIDeployInformation.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIErrors.cpp \
    $${PWD}/OAILog.cpp \
    $${PWD}/OAILogResponse.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
    $${PWD}/OAILogApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

