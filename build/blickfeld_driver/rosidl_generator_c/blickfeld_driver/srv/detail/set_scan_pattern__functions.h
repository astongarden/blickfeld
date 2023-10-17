// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__FUNCTIONS_H_
#define BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "blickfeld_driver/msg/rosidl_generator_c__visibility_control.h"

#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.h"

/// Initialize srv/SetScanPattern message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * blickfeld_driver__srv__SetScanPattern_Request
 * )) before or use
 * blickfeld_driver__srv__SetScanPattern_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__init(blickfeld_driver__srv__SetScanPattern_Request * msg);

/// Finalize srv/SetScanPattern message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Request__fini(blickfeld_driver__srv__SetScanPattern_Request * msg);

/// Create srv/SetScanPattern message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * blickfeld_driver__srv__SetScanPattern_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
blickfeld_driver__srv__SetScanPattern_Request *
blickfeld_driver__srv__SetScanPattern_Request__create();

/// Destroy srv/SetScanPattern message.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Request__destroy(blickfeld_driver__srv__SetScanPattern_Request * msg);

/// Check for srv/SetScanPattern message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__are_equal(const blickfeld_driver__srv__SetScanPattern_Request * lhs, const blickfeld_driver__srv__SetScanPattern_Request * rhs);

/// Copy a srv/SetScanPattern message.
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
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__copy(
  const blickfeld_driver__srv__SetScanPattern_Request * input,
  blickfeld_driver__srv__SetScanPattern_Request * output);

/// Initialize array of srv/SetScanPattern messages.
/**
 * It allocates the memory for the number of elements and calls
 * blickfeld_driver__srv__SetScanPattern_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__Sequence__init(blickfeld_driver__srv__SetScanPattern_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetScanPattern messages.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Request__Sequence__fini(blickfeld_driver__srv__SetScanPattern_Request__Sequence * array);

/// Create array of srv/SetScanPattern messages.
/**
 * It allocates the memory for the array and calls
 * blickfeld_driver__srv__SetScanPattern_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
blickfeld_driver__srv__SetScanPattern_Request__Sequence *
blickfeld_driver__srv__SetScanPattern_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetScanPattern messages.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Request__Sequence__destroy(blickfeld_driver__srv__SetScanPattern_Request__Sequence * array);

/// Check for srv/SetScanPattern message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__Sequence__are_equal(const blickfeld_driver__srv__SetScanPattern_Request__Sequence * lhs, const blickfeld_driver__srv__SetScanPattern_Request__Sequence * rhs);

/// Copy an array of srv/SetScanPattern messages.
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
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Request__Sequence__copy(
  const blickfeld_driver__srv__SetScanPattern_Request__Sequence * input,
  blickfeld_driver__srv__SetScanPattern_Request__Sequence * output);

/// Initialize srv/SetScanPattern message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * blickfeld_driver__srv__SetScanPattern_Response
 * )) before or use
 * blickfeld_driver__srv__SetScanPattern_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__init(blickfeld_driver__srv__SetScanPattern_Response * msg);

/// Finalize srv/SetScanPattern message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Response__fini(blickfeld_driver__srv__SetScanPattern_Response * msg);

/// Create srv/SetScanPattern message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * blickfeld_driver__srv__SetScanPattern_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
blickfeld_driver__srv__SetScanPattern_Response *
blickfeld_driver__srv__SetScanPattern_Response__create();

/// Destroy srv/SetScanPattern message.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Response__destroy(blickfeld_driver__srv__SetScanPattern_Response * msg);

/// Check for srv/SetScanPattern message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__are_equal(const blickfeld_driver__srv__SetScanPattern_Response * lhs, const blickfeld_driver__srv__SetScanPattern_Response * rhs);

/// Copy a srv/SetScanPattern message.
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
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__copy(
  const blickfeld_driver__srv__SetScanPattern_Response * input,
  blickfeld_driver__srv__SetScanPattern_Response * output);

/// Initialize array of srv/SetScanPattern messages.
/**
 * It allocates the memory for the number of elements and calls
 * blickfeld_driver__srv__SetScanPattern_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__Sequence__init(blickfeld_driver__srv__SetScanPattern_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetScanPattern messages.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Response__Sequence__fini(blickfeld_driver__srv__SetScanPattern_Response__Sequence * array);

/// Create array of srv/SetScanPattern messages.
/**
 * It allocates the memory for the array and calls
 * blickfeld_driver__srv__SetScanPattern_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
blickfeld_driver__srv__SetScanPattern_Response__Sequence *
blickfeld_driver__srv__SetScanPattern_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetScanPattern messages.
/**
 * It calls
 * blickfeld_driver__srv__SetScanPattern_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
void
blickfeld_driver__srv__SetScanPattern_Response__Sequence__destroy(blickfeld_driver__srv__SetScanPattern_Response__Sequence * array);

/// Check for srv/SetScanPattern message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__Sequence__are_equal(const blickfeld_driver__srv__SetScanPattern_Response__Sequence * lhs, const blickfeld_driver__srv__SetScanPattern_Response__Sequence * rhs);

/// Copy an array of srv/SetScanPattern messages.
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
ROSIDL_GENERATOR_C_PUBLIC_blickfeld_driver
bool
blickfeld_driver__srv__SetScanPattern_Response__Sequence__copy(
  const blickfeld_driver__srv__SetScanPattern_Response__Sequence * input,
  blickfeld_driver__srv__SetScanPattern_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__FUNCTIONS_H_
