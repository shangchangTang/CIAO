// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.9
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:1304

#include "Shapes_Control_comp_gen_exec.h"

namespace CIAO_Shapes_Control_comp_Impl
{
  //============================================================
  // Component Executor Implementation Class: Control_comp_exec_i
  //============================================================
  
  Control_comp_exec_i::Control_comp_exec_i (void)
  {
  }
  
  Control_comp_exec_i::~Control_comp_exec_i (void)
  {
  }
  
  // Supported operations and attributes.
  
  // Component attributes and port operations.
  
  ::CORBA::ULong
  Control_comp_exec_i::rate (void)
  {
    /* Your code here. */
    return 0;
  }
  
  void
  Control_comp_exec_i::rate (
    ::CORBA::ULong /* rate */)
  {
    /* Your code here. */
  }
  
  ::CORBA::UShort
  Control_comp_exec_i::max_x (void)
  {
    /* Your code here. */
    return 0;
  }
  
  void
  Control_comp_exec_i::max_x (
    ::CORBA::UShort /* max_x */)
  {
    /* Your code here. */
  }
  
  ::CORBA::UShort
  Control_comp_exec_i::max_y (void)
  {
    /* Your code here. */
    return 0;
  }
  
  void
  Control_comp_exec_i::max_y (
    ::CORBA::UShort /* max_y */)
  {
    /* Your code here. */
  }
  
  ::CORBA::UShort
  Control_comp_exec_i::max_size (void)
  {
    /* Your code here. */
    return 0;
  }
  
  void
  Control_comp_exec_i::max_size (
    ::CORBA::UShort /* max_size */)
  {
    /* Your code here. */
  }
  
  ::CORBA::Boolean
  Control_comp_exec_i::resize_shape (void)
  {
    /* Your code here. */
    return false;
  }
  
  void
  Control_comp_exec_i::resize_shape (
    ::CORBA::Boolean /* resize_shape */)
  {
    /* Your code here. */
  }
  
  // Operations from Components::SessionComponent.
  
  void
  Control_comp_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->ciao_context_ =
      ::Shapes::CCM_Control_comp_Context::_narrow (ctx);
    
    if ( ::CORBA::is_nil (this->ciao_context_.in ()))
      {
        throw ::CORBA::INTERNAL ();
      }
  }
  
  void
  Control_comp_exec_i::configuration_complete (void)
  {
    /* Your code here. */
  }
  
  void
  Control_comp_exec_i::ccm_activate (void)
  {
    /* Your code here. */
  }
  
  void
  Control_comp_exec_i::ccm_passivate (void)
  {
    /* Your code here. */
  }
  
  void
  Control_comp_exec_i::ccm_remove (void)
  {
    /* Your code here. */
  }
  
  extern "C"  ::Components::EnterpriseComponent_ptr
  create_Shapes_Control_comp_Impl (void)
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();
    
    ACE_NEW_NORETURN (
      retval,
      Control_comp_exec_i);
    
    return retval;
  }
}
