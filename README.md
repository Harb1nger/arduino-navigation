# Arduino Navigation Project

## Purpose

The program is to calculate the date required to successfully navigate a route. In this case a direct heading to a destination with a noted waypoint (landmark) on route. Look up any terms you are unfamiliar with on relevant navigation terminology and formulae sources.

## Brief

The user should be asked to enter the following information:
- True Track (°/degree)
- Variation (°/degree)
- Deviation (°/degree)
- True Air Speed (kts/knots)
- Distance to Destination (nm/Nautical Mile)
- Distance to Waypoint (nm/Nautical Mile)

All input data should be checked that it is within range (e.g. distance is a positive non-zero value). An error/warning should be displayed where incorrect date is entered and the user should be re-prompted to enter the correct information.

You should then use this information to calculate:
- Magnetic Track (°/degree)
- Compass Heading (°/degree)
- Flight Time to Destination (time)
- Fuel Burn (assume 45 litres/hour)
- Flight Time to Landmark (time)

To test the program you can use the following input values (example map shown below):
|||
:-----:|:-----:
True Track|250°
Variation|+5°
Deviation|-2°
Distance to Destination|50 nm
True Air Speed|60 kts
Distance to Waypoint|10 nm
|||

This should give you the following calculated values:
|||
:-----:|:-----:
Magnetic Track|255°
Compass Heading|253°
Flight Time to Destination|38 mins
Fuel Burn|37.5 litres
Flight Time to Waypoint|12 mins
|||
