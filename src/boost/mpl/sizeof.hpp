
#ifndef BOOST_MPL_SIZEOF_HPP_INCLUDED
#define BOOST_MPL_SIZEOF_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2003
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: sizeof.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
<<<<<<< HEAD
// $Date: 2008-10-11 07:19:02 +0100 (Sat, 11 Oct 2008) $
=======
// $Date: 2008-10-11 02:19:02 -0400 (Sat, 11 Oct 2008) $
>>>>>>> 6351d5b3dac0b2a2cbdb7bf18b5ef3f3fb6bafe4
// $Revision: 49267 $

#include <boost/mpl/size_t.hpp>
#include <boost/mpl/aux_/na_spec.hpp>
#include <boost/mpl/aux_/lambda_support.hpp>

namespace boost { namespace mpl {

template<
      typename BOOST_MPL_AUX_NA_PARAM(T)
    >
struct sizeof_
    : mpl::size_t< sizeof(T) >
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(1,sizeof_,(T))
};

BOOST_MPL_AUX_NA_SPEC_NO_ETI(1, sizeof_)

}}

#endif // BOOST_MPL_SIZEOF_HPP_INCLUDED
