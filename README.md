# Transfer Function Parser

Simple parser for transfer functions specified in an xml format for a [QGradient](http://doc.qt.io/qt-5/qgradient.html).

An example transfer function might look like this:

```xml
<!DOCTYPE Gradient>
<gradientData spread="PadSpread" startX="0" startY="0.5" coordinateMode="StretchToDeviceMode" type="LinearGradient" endX="1" endY="0.5">
 <stopData position="0.298828">
  <colorData g="0" r="0" a="0" b="0"/>
 </stopData>
 <stopData position="0.311035">
  <colorData g="100" r="0" a="76" b="0"/>
 </stopData>
 <stopData position="0.37207">
  <colorData g="10" r="30" a="255" b="40"/>
 </stopData>
</gradientData>
```
