QT += network

HEADERS += \
# Models
    $${PWD}/OAIApiInformation.h \
    $${PWD}/OAIArrayOfLogsResponse.h \
    $${PWD}/OAIArrayOfLogsResponseMeta.h \
    $${PWD}/OAIArrayOfTagsResponse.h \
    $${PWD}/OAICreateLog.h \
    $${PWD}/OAICreateTag.h \
    $${PWD}/OAIDeployInformation.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAIErrorSource.h \
    $${PWD}/OAIErrors.h \
    $${PWD}/OAIFilterLogsOptions.h \
    $${PWD}/OAILog.h \
    $${PWD}/OAILogOrigin.h \
    $${PWD}/OAILogResponse.h \
    $${PWD}/OAIPaginationMeta.h \
    $${PWD}/OAIPaginationOptions.h \
    $${PWD}/OAISortLogsOptions.h \
    $${PWD}/OAISortOrder.h \
    $${PWD}/OAITag.h \
    $${PWD}/OAITagResponse.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
    $${PWD}/OAILogApi.h \
    $${PWD}/OAITagApi.h \
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
    $${PWD}/OAIArrayOfLogsResponseMeta.cpp \
    $${PWD}/OAIArrayOfTagsResponse.cpp \
    $${PWD}/OAICreateLog.cpp \
    $${PWD}/OAICreateTag.cpp \
    $${PWD}/OAIDeployInformation.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIErrorSource.cpp \
    $${PWD}/OAIErrors.cpp \
    $${PWD}/OAIFilterLogsOptions.cpp \
    $${PWD}/OAILog.cpp \
    $${PWD}/OAILogOrigin.cpp \
    $${PWD}/OAILogResponse.cpp \
    $${PWD}/OAIPaginationMeta.cpp \
    $${PWD}/OAIPaginationOptions.cpp \
    $${PWD}/OAISortLogsOptions.cpp \
    $${PWD}/OAISortOrder.cpp \
    $${PWD}/OAITag.cpp \
    $${PWD}/OAITagResponse.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
    $${PWD}/OAILogApi.cpp \
    $${PWD}/OAITagApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

