#!/bin/bash

set -e

root="screens"

for dir in "$root"/*; do
    screen=$(basename "$dir")

    [ -d "$dir" ] || continue

    # Header file
    cat <<EOF > "$dir/$screen.hpp"
#pragma once

namespace screens {
namespace $screen {

void show();

} // namespace $screen
} // namespace screens
EOF

    # Source file
    cat <<EOF > "$dir/$screen.cpp"
#include "$screen.hpp"

namespace screens {
namespace $screen {

void show() {
    // TODO: implement screen logic
}

} // namespace $screen
} // namespace screens
EOF

    echo "Filled $dir/$screen.[hpp,cpp]"
done

