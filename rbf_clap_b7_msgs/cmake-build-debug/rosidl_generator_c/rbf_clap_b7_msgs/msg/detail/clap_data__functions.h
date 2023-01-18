// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__FUNCTIONS_H_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rbf_clap_b7_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.h"

/// Initialize msg/ClapData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rbf_clap_b7_msgs__msg__ClapData
 * )) before or use
 * rbf_clap_b7_msgs__msg__ClapData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__init(rbf_clap_b7_msgs__msg__ClapData * msg);

/// Finalize msg/ClapData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
void
rbf_clap_b7_msgs__msg__ClapData__fini(rbf_clap_b7_msgs__msg__ClapData * msg);

/// Create msg/ClapData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rbf_clap_b7_msgs__msg__ClapData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
rbf_clap_b7_msgs__msg__ClapData *
rbf_clap_b7_msgs__msg__ClapData__create();

/// Destroy msg/ClapData message.
/**
 * It calls
 * rbf_clap_b7_msgs__msg__ClapData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
void
rbf_clap_b7_msgs__msg__ClapData__destroy(rbf_clap_b7_msgs__msg__ClapData * msg);

/// Check for msg/ClapData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__are_equal(const rbf_clap_b7_msgs__msg__ClapData * lhs, const rbf_clap_b7_msgs__msg__ClapData * rhs);

/// Copy a msg/ClapData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__copy(
  const rbf_clap_b7_msgs__msg__ClapData * input,
  rbf_clap_b7_msgs__msg__ClapData * output);

/// Initialize array of msg/ClapData messages.
/**
 * It allocates the memory for the number of elements and calls
 * rbf_clap_b7_msgs__msg__ClapData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__Sequence__init(rbf_clap_b7_msgs__msg__ClapData__Sequence * array, size_t size);

/// Finalize array of msg/ClapData messages.
/**
 * It calls
 * rbf_clap_b7_msgs__msg__ClapData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
void
rbf_clap_b7_msgs__msg__ClapData__Sequence__fini(rbf_clap_b7_msgs__msg__ClapData__Sequence * array);

/// Create array of msg/ClapData messages.
/**
 * It allocates the memory for the array and calls
 * rbf_clap_b7_msgs__msg__ClapData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
rbf_clap_b7_msgs__msg__ClapData__Sequence *
rbf_clap_b7_msgs__msg__ClapData__Sequence__create(size_t size);

/// Destroy array of msg/ClapData messages.
/**
 * It calls
 * rbf_clap_b7_msgs__msg__ClapData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
void
rbf_clap_b7_msgs__msg__ClapData__Sequence__destroy(rbf_clap_b7_msgs__msg__ClapData__Sequence * array);

/// Check for msg/ClapData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__Sequence__are_equal(const rbf_clap_b7_msgs__msg__ClapData__Sequence * lhs, const rbf_clap_b7_msgs__msg__ClapData__Sequence * rhs);

/// Copy an array of msg/ClapData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbf_clap_b7_msgs
bool
rbf_clap_b7_msgs__msg__ClapData__Sequence__copy(
  const rbf_clap_b7_msgs__msg__ClapData__Sequence * input,
  rbf_clap_b7_msgs__msg__ClapData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__FUNCTIONS_H_
