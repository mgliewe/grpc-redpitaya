// Copyright 2022 The gRPC Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef GRPC_SRC_CORE_LIB_IOMGR_EVENT_ENGINE_SHIMS_ENDPOINT_H
#define GRPC_SRC_CORE_LIB_IOMGR_EVENT_ENGINE_SHIMS_ENDPOINT_H
#include <grpc/support/port_platform.h>

#include <grpc/event_engine/event_engine.h>

#include "src/core/lib/iomgr/endpoint.h"

namespace grpc_event_engine {
namespace experimental {

/// Creates an internal grpc_endpoint struct from an EventEngine Endpoint.
/// Server code needs to create grpc_endpoints after the EventEngine has made
/// connections.
grpc_endpoint* grpc_event_engine_endpoint_create(
    std::unique_ptr<EventEngine::Endpoint> ee_endpoint);

}  // namespace experimental
}  // namespace grpc_event_engine

#endif  // GRPC_SRC_CORE_LIB_IOMGR_EVENT_ENGINE_SHIMS_ENDPOINT_H
