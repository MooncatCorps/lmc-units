#pragma once

#include <mooncat/units/charge>
#include <mooncat/units/voltage>

namespace lmc::units::capacitance
{
using farads = impl::cnt::unit_container<impl::def::definition_divide<
    charge::coulombs::definition,
    voltage::volts::definition>>;
ADD_PREFIXES_TO_CONTAINER(farads)

using dimension = farads::definition::dimension;

template <impl::cnt::cpt::unit_container container>
using is_capacitance_unit
    = dimension::equals<typename container::definition::dimension>;

template <impl::cnt::cpt::unit_container container>
constexpr bool is_capacitance_unit_v = is_capacitance_unit<container>::value;

} // namespace lmc::units::capacitance
