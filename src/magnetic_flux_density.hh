#pragma once

#include <mooncat/units/magnetic_flux>

namespace lmc::units::magnetic_flux_density
{
using teslas = impl::cnt::unit_container<impl::def::definition_divide<
    magnetic_flux::webers::definition,
    impl::def::definition_squared<length::meters::definition>>>;
ADD_PREFIXES_TO_CONTAINER(teslas)

using dimension = teslas::definition::dimension;

template <impl::cnt::cpt::unit_container container>
using is_magnetic_flux_density_unit
    = dimension::equals<typename container::definition::dimension>;

template <impl::cnt::cpt::unit_container container>
constexpr bool is_magnetic_flux_density_unit_v
    = is_magnetic_flux_density_unit<container>::value;

} // namespace lmc::units::magnetic_flux_density
