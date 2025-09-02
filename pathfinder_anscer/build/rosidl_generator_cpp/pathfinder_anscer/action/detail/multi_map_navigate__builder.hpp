// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pathfinder_anscer:action/MultiMapNavigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pathfinder_anscer/action/multi_map_navigate.hpp"


#ifndef PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__BUILDER_HPP_
#define PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pathfinder_anscer/action/detail/multi_map_navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_Goal_target_map_name
{
public:
  explicit Init_MultiMapNavigate_Goal_target_map_name(::pathfinder_anscer::action::MultiMapNavigate_Goal & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_Goal target_map_name(::pathfinder_anscer::action::MultiMapNavigate_Goal::_target_map_name_type arg)
  {
    msg_.target_map_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Goal msg_;
};

class Init_MultiMapNavigate_Goal_goal_pose
{
public:
  Init_MultiMapNavigate_Goal_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_Goal_target_map_name goal_pose(::pathfinder_anscer::action::MultiMapNavigate_Goal::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_MultiMapNavigate_Goal_target_map_name(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_Goal>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_Goal_goal_pose();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_Result_message
{
public:
  explicit Init_MultiMapNavigate_Result_message(::pathfinder_anscer::action::MultiMapNavigate_Result & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_Result message(::pathfinder_anscer::action::MultiMapNavigate_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Result msg_;
};

class Init_MultiMapNavigate_Result_success
{
public:
  Init_MultiMapNavigate_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_Result_message success(::pathfinder_anscer::action::MultiMapNavigate_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MultiMapNavigate_Result_message(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_Result>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_Result_success();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_Feedback_distance_remaining
{
public:
  explicit Init_MultiMapNavigate_Feedback_distance_remaining(::pathfinder_anscer::action::MultiMapNavigate_Feedback & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_Feedback distance_remaining(::pathfinder_anscer::action::MultiMapNavigate_Feedback::_distance_remaining_type arg)
  {
    msg_.distance_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Feedback msg_;
};

class Init_MultiMapNavigate_Feedback_current_state
{
public:
  Init_MultiMapNavigate_Feedback_current_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_Feedback_distance_remaining current_state(::pathfinder_anscer::action::MultiMapNavigate_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return Init_MultiMapNavigate_Feedback_distance_remaining(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_Feedback>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_Feedback_current_state();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_SendGoal_Request_goal
{
public:
  explicit Init_MultiMapNavigate_SendGoal_Request_goal(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request goal(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request msg_;
};

class Init_MultiMapNavigate_SendGoal_Request_goal_id
{
public:
  Init_MultiMapNavigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_SendGoal_Request_goal goal_id(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiMapNavigate_SendGoal_Request_goal(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Request>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_SendGoal_Request_goal_id();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_SendGoal_Response_stamp
{
public:
  explicit Init_MultiMapNavigate_SendGoal_Response_stamp(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response stamp(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response msg_;
};

class Init_MultiMapNavigate_SendGoal_Response_accepted
{
public:
  Init_MultiMapNavigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_SendGoal_Response_stamp accepted(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MultiMapNavigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Response>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_SendGoal_Response_accepted();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_SendGoal_Event_response
{
public:
  explicit Init_MultiMapNavigate_SendGoal_Event_response(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event response(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event msg_;
};

class Init_MultiMapNavigate_SendGoal_Event_request
{
public:
  explicit Init_MultiMapNavigate_SendGoal_Event_request(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MultiMapNavigate_SendGoal_Event_response request(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MultiMapNavigate_SendGoal_Event_response(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event msg_;
};

class Init_MultiMapNavigate_SendGoal_Event_info
{
public:
  Init_MultiMapNavigate_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_SendGoal_Event_request info(::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MultiMapNavigate_SendGoal_Event_request(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_SendGoal_Event>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_SendGoal_Event_info();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_GetResult_Request_goal_id
{
public:
  Init_MultiMapNavigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Request goal_id(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_GetResult_Request>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_GetResult_Request_goal_id();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_GetResult_Response_result
{
public:
  explicit Init_MultiMapNavigate_GetResult_Response_result(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response result(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response msg_;
};

class Init_MultiMapNavigate_GetResult_Response_status
{
public:
  Init_MultiMapNavigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_GetResult_Response_result status(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MultiMapNavigate_GetResult_Response_result(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_GetResult_Response>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_GetResult_Response_status();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_GetResult_Event_response
{
public:
  explicit Init_MultiMapNavigate_GetResult_Event_response(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event response(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event msg_;
};

class Init_MultiMapNavigate_GetResult_Event_request
{
public:
  explicit Init_MultiMapNavigate_GetResult_Event_request(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MultiMapNavigate_GetResult_Event_response request(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MultiMapNavigate_GetResult_Event_response(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event msg_;
};

class Init_MultiMapNavigate_GetResult_Event_info
{
public:
  Init_MultiMapNavigate_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_GetResult_Event_request info(::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MultiMapNavigate_GetResult_Event_request(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_GetResult_Event>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_GetResult_Event_info();
}

}  // namespace pathfinder_anscer


namespace pathfinder_anscer
{

namespace action
{

namespace builder
{

class Init_MultiMapNavigate_FeedbackMessage_feedback
{
public:
  explicit Init_MultiMapNavigate_FeedbackMessage_feedback(::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage feedback(::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage msg_;
};

class Init_MultiMapNavigate_FeedbackMessage_goal_id
{
public:
  Init_MultiMapNavigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiMapNavigate_FeedbackMessage_feedback goal_id(::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MultiMapNavigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pathfinder_anscer::action::MultiMapNavigate_FeedbackMessage>()
{
  return pathfinder_anscer::action::builder::Init_MultiMapNavigate_FeedbackMessage_goal_id();
}

}  // namespace pathfinder_anscer

#endif  // PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__BUILDER_HPP_
