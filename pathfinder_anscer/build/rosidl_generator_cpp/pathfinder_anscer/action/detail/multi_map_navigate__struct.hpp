// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pathfinder_anscer:action/MultiMapNavigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pathfinder_anscer/action/multi_map_navigate.hpp"


#ifndef PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_HPP_
#define PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Goal __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Goal __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_Goal_
{
  using Type = MultiMapNavigate_Goal_<ContainerAllocator>;

  explicit MultiMapNavigate_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_map_name = "";
    }
  }

  explicit MultiMapNavigate_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_pose(_alloc, _init),
    target_map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_map_name = "";
    }
  }

  // field types and members
  using _goal_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _target_map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_map_name_type target_map_name;

  // setters for named parameter idiom
  Type & set__goal_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }
  Type & set__target_map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_map_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Goal
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Goal
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_Goal_ & other) const
  {
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->target_map_name != other.target_map_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_Goal_

// alias to use template instance with default allocator
using MultiMapNavigate_Goal =
  pathfinder_anscer::action::MultiMapNavigate_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Result __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Result __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_Result_
{
  using Type = MultiMapNavigate_Result_<ContainerAllocator>;

  explicit MultiMapNavigate_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MultiMapNavigate_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Result
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Result
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_Result_

// alias to use template instance with default allocator
using MultiMapNavigate_Result =
  pathfinder_anscer::action::MultiMapNavigate_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Feedback __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_Feedback_
{
  using Type = MultiMapNavigate_Feedback_<ContainerAllocator>;

  explicit MultiMapNavigate_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->distance_remaining = 0.0f;
    }
  }

  explicit MultiMapNavigate_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->distance_remaining = 0.0f;
    }
  }

  // field types and members
  using _current_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_type current_state;
  using _distance_remaining_type =
    float;
  _distance_remaining_type distance_remaining;

  // setters for named parameter idiom
  Type & set__current_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__distance_remaining(
    const float & _arg)
  {
    this->distance_remaining = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Feedback
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_Feedback
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_Feedback_ & other) const
  {
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->distance_remaining != other.distance_remaining) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_Feedback_

// alias to use template instance with default allocator
using MultiMapNavigate_Feedback =
  pathfinder_anscer::action::MultiMapNavigate_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "pathfinder_anscer/action/detail/multi_map_navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_SendGoal_Request_
{
  using Type = MultiMapNavigate_SendGoal_Request_<ContainerAllocator>;

  explicit MultiMapNavigate_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MultiMapNavigate_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const pathfinder_anscer::action::MultiMapNavigate_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_SendGoal_Request_

// alias to use template instance with default allocator
using MultiMapNavigate_SendGoal_Request =
  pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_SendGoal_Response_
{
  using Type = MultiMapNavigate_SendGoal_Response_<ContainerAllocator>;

  explicit MultiMapNavigate_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MultiMapNavigate_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_SendGoal_Response_

// alias to use template instance with default allocator
using MultiMapNavigate_SendGoal_Response =
  pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_SendGoal_Event_
{
  using Type = MultiMapNavigate_SendGoal_Event_<ContainerAllocator>;

  explicit MultiMapNavigate_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MultiMapNavigate_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_SendGoal_Event_

// alias to use template instance with default allocator
using MultiMapNavigate_SendGoal_Event =
  pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer

namespace pathfinder_anscer
{

namespace action
{

struct MultiMapNavigate_SendGoal
{
  using Request = pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request;
  using Response = pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response;
  using Event = pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event;
};

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Request __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_GetResult_Request_
{
  using Type = MultiMapNavigate_GetResult_Request_<ContainerAllocator>;

  explicit MultiMapNavigate_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MultiMapNavigate_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Request
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Request
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_GetResult_Request_

// alias to use template instance with default allocator
using MultiMapNavigate_GetResult_Request =
  pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'result'
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Response __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_GetResult_Response_
{
  using Type = MultiMapNavigate_GetResult_Response_<ContainerAllocator>;

  explicit MultiMapNavigate_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MultiMapNavigate_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const pathfinder_anscer::action::MultiMapNavigate_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Response
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Response
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_GetResult_Response_

// alias to use template instance with default allocator
using MultiMapNavigate_GetResult_Response =
  pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Event __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_GetResult_Event_
{
  using Type = MultiMapNavigate_GetResult_Event_<ContainerAllocator>;

  explicit MultiMapNavigate_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MultiMapNavigate_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pathfinder_anscer::action::MultiMapNavigate_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Event
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_GetResult_Event
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_GetResult_Event_

// alias to use template instance with default allocator
using MultiMapNavigate_GetResult_Event =
  pathfinder_anscer::action::MultiMapNavigate_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer

namespace pathfinder_anscer
{

namespace action
{

struct MultiMapNavigate_GetResult
{
  using Request = pathfinder_anscer::action::MultiMapNavigate_GetResult_Request;
  using Response = pathfinder_anscer::action::MultiMapNavigate_GetResult_Response;
  using Event = pathfinder_anscer::action::MultiMapNavigate_GetResult_Event;
};

}  // namespace action

}  // namespace pathfinder_anscer


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage __declspec(deprecated)
#endif

namespace pathfinder_anscer
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MultiMapNavigate_FeedbackMessage_
{
  using Type = MultiMapNavigate_FeedbackMessage_<ContainerAllocator>;

  explicit MultiMapNavigate_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MultiMapNavigate_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const pathfinder_anscer::action::MultiMapNavigate_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage
    std::shared_ptr<pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiMapNavigate_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiMapNavigate_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiMapNavigate_FeedbackMessage_

// alias to use template instance with default allocator
using MultiMapNavigate_FeedbackMessage =
  pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace pathfinder_anscer

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace pathfinder_anscer
{

namespace action
{

struct MultiMapNavigate
{
  /// The goal message defined in the action definition.
  using Goal = pathfinder_anscer::action::MultiMapNavigate_Goal;
  /// The result message defined in the action definition.
  using Result = pathfinder_anscer::action::MultiMapNavigate_Result;
  /// The feedback message defined in the action definition.
  using Feedback = pathfinder_anscer::action::MultiMapNavigate_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = pathfinder_anscer::action::MultiMapNavigate_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = pathfinder_anscer::action::MultiMapNavigate_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MultiMapNavigate MultiMapNavigate;

}  // namespace action

}  // namespace pathfinder_anscer

#endif  // PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_HPP_
