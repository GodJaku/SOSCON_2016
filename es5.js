var Observable = require("FuseJS/Observable");
var data = Observable();
fetch('https://ajax.googleapis.com/ajax/services/feed/load?v=1.0&q=http://www.digg.com/rss/index.xml').then(function (response) {
  return response.json();
}).then(function (responseObj) {
  data.value = responseObj;
});
module.exports = { data: data };

