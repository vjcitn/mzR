
#ifndef BOOST_MPL_AUX_RANGE_C_O1_SIZE_HPP_INCLUDED
#define BOOST_MPL_AUX_RANGE_C_O1_SIZE_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Id: O1_size.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
<<<<<<< HEAD
// $Date: 2008-10-11 07:19:02 +0100 (Sat, 11 Oct 2008) $
=======
// $Date: 2008-10-11 02:19:02 -0400 (Sat, 11 Oct 2008) $
>>>>>>> 6351d5b3dac0b2a2cbdb7bf18b5ef3f3fb6bafe4
// $Revision: 49267 $

#include <boost/mpl/O1_size_fwd.hpp>
#include <boost/mpl/aux_/range_c/size.hpp>
#include <boost/mpl/aux_/range_c/tag.hpp>

namespace boost { namespace mpl {

template<>
struct O1_size_impl< aux::half_open_range_tag >
    : size_impl< aux::half_open_range_tag >
{
};

}}

#endif // BOOST_MPL_AUX_RANGE_C_O1_SIZE_HPP_INCLUDED
