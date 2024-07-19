function Outer() {
  var a = 10;
  function Inner() {
    console.log(a);
  }
  return Inner;
}

var myClosure = Outer();
myClosure();
