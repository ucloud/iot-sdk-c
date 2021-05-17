/*
* Copyright (C) 2012-2019 UCloud. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#ifndef C_SDK_OTA_CONFIG_H_
#define C_SDK_OTA_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

#define TYPE_FIELD                  "Method"
#define MD5_FIELD                   "Payload.MD5"
#define MODULE_FIELD                "Payload.Module"
#define VERSION_FIELD               "Payload.Version"
#define CURRENT_VERSION_FIELD		"Payload.CurrentVersion"
#define URL_FIELD                   "Payload.URL"
#define SIZE_FIELD                  "Payload.Size"
#define TASKID_FILED				"Payload.TaskID"
#define NOTIFY_METHOD      			"notify"

#define REPORT_VER_TEMPLATE       			"{\"Method\": \"report\", \"Payload\":{\"Module\":\"%s\", \"Version\":\"%s\"}}"
#define REPORT_SUCCESS_MSG_TEMPLATE         "{\"Method\": \"success\", \"Payload\": {\"TaskID\": \"%s\"}}"
#define REPORT_FAIL_MSG_TEMPLATE          	"{\"Method\": \"fail\", \"Payload\": {\"TaskID\": \"%s\", \"ErrMsg\":\"%s\"}}"
#define NOTIFY_MSG_TEMPLATE     			"{\"Method\": \"notify\", \"Payload\":{\"TaskID\":\"%s\"}}"
#define UPGRADING_MSG_TEMPLATE   			"{\"Method\": \"upgrading\", \"Payload\":{\"TaskID\":\"%s\"}}"

#define OTA_UPSTREAM_MSG_BUF_LEN    (129)
#define OTA_TOPIC_BUF_LEN           (129)

#define OTA_UPSTREAM_TOPIC_TYPE      "upstream"
#define OTA_DOWNSTREAM_TOPIC_TYPE    "downstream"
#define OTA_TOPIC_TEMPLATE           "/$system/%s/%s/ota/%s"

#ifdef __cplusplus
}
#endif

#endif //C_SDK_OTA_CONFIG_H_
