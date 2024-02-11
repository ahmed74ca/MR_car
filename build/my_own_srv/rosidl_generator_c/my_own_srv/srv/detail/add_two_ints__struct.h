// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_own_srv:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef MY_OWN_SRV__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define MY_OWN_SRV__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package my_own_srv.
typedef struct my_own_srv__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} my_own_srv__srv__AddTwoInts_Request;

// Struct for a sequence of my_own_srv__srv__AddTwoInts_Request.
typedef struct my_own_srv__srv__AddTwoInts_Request__Sequence
{
  my_own_srv__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_own_srv__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package my_own_srv.
typedef struct my_own_srv__srv__AddTwoInts_Response
{
  int64_t sum;
} my_own_srv__srv__AddTwoInts_Response;

// Struct for a sequence of my_own_srv__srv__AddTwoInts_Response.
typedef struct my_own_srv__srv__AddTwoInts_Response__Sequence
{
  my_own_srv__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_own_srv__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_OWN_SRV__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
