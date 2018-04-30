thrustDelay=0.1;
engineBrakeCoef=0.1;
overSpeedBrakeCoef=0.80000001;
brakeIdleSpeed=1.78;
maxSpeed=100;
fuelCapacity=50;
wheelCircumference=1.4;
antiRollbarForceCoef=0.30000001;
antiRollbarForceLimit=0.2;
antiRollbarSpeedMin=20;
antiRollbarSpeedMax=50;
idleRpm=600;
redRpm=2000;
simulation = "carx";
dampersBumpCoef=0.30000001;
differentialType="rear_open";
frontRearSplit=0.5;
frontBias=1.3;
rearBias=1.3;
centreBias=1.3;
clutchStrength=50;
enginePower=25;
maxOmega=210;
peakTorque=280;
dampingRateFullThrottle=0.079999998;
dampingRateZeroThrottleClutchEngaged=0.15000001;
dampingRateZeroThrottleClutchDisengaged=0.15000001;
torqueCurve[]=
{
	{0,0.60000002},
	{0.2,0.64999998},
	{0.30000001,0.80000001},
	{0.69999999,0.94999999},
	{0.80000001,1},
	{0.89999998,0.94999999},
	{1,0.5}
};
changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.94999999};
switchTime=0.1;
latency=1;
class complexGearbox
{
	GearboxRatios[]=
	{
		"R1",
		-2.3510001,
		"N",
		0,
		"D1",
		2.0810001,
		"D2",
		1.257,
		"D3",
		0.73699999
	};
	TransmissionRatios[]=
	{
		"High",
		4
	};
	gearBoxMode="auto";
	moveOffGear=1;
	driveString="D";
	neutralString="N";
	reverseString="R";
};
class Wheels
{
	class LF
	{
		boneName = "wheel_1_1_damper";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		damping  = 75.0;		
		steering = true;
		side = "left";
		mass=20;
		MOI=10.3;
		latStiffX=25;
		latStiffY=120;
		longitudinalStiffnessPerUnitGravity=5000;
		maxBrakeTorque=1000;
		sprungMass=81.5;
		springStrength=2037;
		springDamperRate=406;
		dampingRate=0.5;
		dampingRateDamaged=5;
		dampingRateInAir = 8830.0;
		dampingRateDestroyed=5000;
		maxCompression=0.10000001;
		maxDroop=0.15000001;
		suspTravelDirection[]={0,-1,0};
		frictionVsSlipGraph[]=
		{
			{0,1},
			{0.5,1},
			{1,1}
		};
		suspForceAppPointOffset="wheel_1_1_axis";
		tireForceAppPointOffset="wheel_1_1_axis";
	};
	class LM: LF
	{
		boneName="wheel_1_2_damper";
		steering=0;
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		side = "left";
		suspForceAppPointOffset="wheel_1_2_axis";
		tireForceAppPointOffset="wheel_1_2_axis";
		maxHandBrakeTorque=1500;
	};
	class LR: LF
	{
		boneName="wheel_1_3_damper";
		steering=0;
		center="wheel_1_3_axis";
		boundary="wheel_1_3_bound";
		side = "left";
		suspForceAppPointOffset="wheel_1_3_axis";
		tireForceAppPointOffset="wheel_1_3_axis";
		maxHandBrakeTorque=1500;
	};
	class RF: LF
	{
		boneName="wheel_2_1_damper";
		center="wheel_2_1_axis";
		boundary="wheel_2_1_bound";
		suspForceAppPointOffset="wheel_2_1_axis";
		tireForceAppPointOffset="wheel_2_1_axis";
		steering=1;
		side="right";
	};
	class RM: RF
	{
		boneName="wheel_2_2_damper";
		steering=0;
		center="wheel_2_2_axis";
		boundary="wheel_2_2_bound";
		suspForceAppPointOffset="wheel_2_2_axis";
		tireForceAppPointOffset="wheel_2_2_axis";
		maxHandBrakeTorque=1500;
		side="right";
	};
	class RR: RF
	{
		boneName="wheel_2_3_damper";
		steering=0;
		center="wheel_2_3_axis";
		boundary="wheel_2_3_bound";
		suspForceAppPointOffset="wheel_2_3_axis";
		tireForceAppPointOffset="wheel_2_3_axis";
		maxHandBrakeTorque=1500;
		side="right";
	};
};