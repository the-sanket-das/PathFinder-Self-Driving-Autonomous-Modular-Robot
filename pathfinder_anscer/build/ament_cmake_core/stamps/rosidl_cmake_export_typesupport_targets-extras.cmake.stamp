# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:pathfinder_anscer__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:pathfinder_anscer__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:pathfinder_anscer__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:pathfinder_anscer__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:pathfinder_anscer__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:pathfinder_anscer__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:pathfinder_anscer__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:pathfinder_anscer__rosidl_typesupport_cpp;:pathfinder_anscer__rosidl_generator_py")

# populate pathfinder_anscer_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "pathfinder_anscer::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'pathfinder_anscer' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND pathfinder_anscer_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
