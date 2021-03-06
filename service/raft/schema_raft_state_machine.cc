/*
 * Copyright (C) 2020-present ScyllaDB
 */

/*
 * This file is part of Scylla.
 *
 * Scylla is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Scylla is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Scylla.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "service/raft/schema_raft_state_machine.hh"

namespace service {

future<> schema_raft_state_machine::apply(std::vector<raft::command_cref> command) {
    return make_ready_future<>();
}

future<raft::snapshot_id> schema_raft_state_machine::take_snapshot() {
    return make_ready_future<raft::snapshot_id>(raft::snapshot_id::create_random_id());
}

void schema_raft_state_machine::drop_snapshot(raft::snapshot_id id) {
    (void) id;
}

future<> schema_raft_state_machine::load_snapshot(raft::snapshot_id id) {
    return make_ready_future<>();
}

future<> schema_raft_state_machine::abort() {
    return make_ready_future<>();
}

} // end of namespace service
