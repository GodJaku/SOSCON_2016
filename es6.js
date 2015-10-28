var Observable= require("FuseJS/Observable");
var data= Observable();
fetch('https://ajax.googleapis.com/ajax/services/feed/load?v=1.0&q=http://www.digg.com/rss/index.xml')
.then((response)=>response.json())
.then((responseObj)=>{data.value= responseObj});
module.exports= {data}