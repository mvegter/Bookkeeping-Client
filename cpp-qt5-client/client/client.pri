QT += network

HEADERS += \
# Models
    $${PWD}/OAIApiInformation.h \
    $${PWD}/OAIArrayOfLogsResponse.h \
    $${PWD}/OAIArrayOfLogsResponseMeta.h \
    $${PWD}/OAIArrayOfSubsystemsResponse.h \
    $${PWD}/OAIArrayOfSubsystemsResponseMeta.h \
    $${PWD}/OAIArrayOfTagsResponse.h \
    $${PWD}/OAICreateLog.h \
    $${PWD}/OAICreateSubsystem.h \
    $${PWD}/OAICreateTag.h \
    $${PWD}/OAIDeployInformation.h \
    $${PWD}/OAIError.h \
    $${PWD}/OAIErrorSource.h \
    $${PWD}/OAIErrors.h \
    $${PWD}/OAIFilterLogsOptions.h \
    $${PWD}/OAIFilterLogsTagOptions.h \
    $${PWD}/OAILog.h \
    $${PWD}/OAILogOrigin.h \
    $${PWD}/OAILogResponse.h \
    $${PWD}/OAILogSubtype.h \
    $${PWD}/OAILogTree.h \
    $${PWD}/OAILogTreeResponse.h \
    $${PWD}/OAIPaginationMeta.h \
    $${PWD}/OAIPaginationOptions.h \
    $${PWD}/OAISortLogsOptions.h \
    $${PWD}/OAISortOrder.h \
    $${PWD}/OAISubsystem.h \
    $${PWD}/OAISubsystemResponse.h \
    $${PWD}/OAITag.h \
    $${PWD}/OAITagResponse.h \
# APIs
    $${PWD}/OAIDefaultApi.h \
    $${PWD}/OAILogApi.h \
    $${PWD}/OAISubsystemApi.h \
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
    $${PWD}/OAIArrayOfSubsystemsResponse.cpp \
    $${PWD}/OAIArrayOfSubsystemsResponseMeta.cpp \
    $${PWD}/OAIArrayOfTagsResponse.cpp \
    $${PWD}/OAICreateLog.cpp \
    $${PWD}/OAICreateSubsystem.cpp \
    $${PWD}/OAICreateTag.cpp \
    $${PWD}/OAIDeployInformation.cpp \
    $${PWD}/OAIError.cpp \
    $${PWD}/OAIErrorSource.cpp \
    $${PWD}/OAIErrors.cpp \
    $${PWD}/OAIFilterLogsOptions.cpp \
    $${PWD}/OAIFilterLogsTagOptions.cpp \
    $${PWD}/OAILog.cpp \
    $${PWD}/OAILogOrigin.cpp \
    $${PWD}/OAILogResponse.cpp \
    $${PWD}/OAILogSubtype.cpp \
    $${PWD}/OAILogTree.cpp \
    $${PWD}/OAILogTreeResponse.cpp \
    $${PWD}/OAIPaginationMeta.cpp \
    $${PWD}/OAIPaginationOptions.cpp \
    $${PWD}/OAISortLogsOptions.cpp \
    $${PWD}/OAISortOrder.cpp \
    $${PWD}/OAISubsystem.cpp \
    $${PWD}/OAISubsystemResponse.cpp \
    $${PWD}/OAITag.cpp \
    $${PWD}/OAITagResponse.cpp \
# APIs
    $${PWD}/OAIDefaultApi.cpp \
    $${PWD}/OAILogApi.cpp \
    $${PWD}/OAISubsystemApi.cpp \
    $${PWD}/OAITagApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

