#!/bin/bash

start() {
  $JAVA_HOME/bin/java -jar $JETTY_HOME/start.jar -DSTOP.PORT=9093 -DSTOP.KEY=stop_jetty --ini=webapps/jenkins/start.d/jenkins.ini  webapps/jenkins/start.d/jetty.xml
}


stop() {
  $JAVA_HOME/bin/java -jar $JETTY_HOME/start.jar -DSTOP.PORT=9093 -DSTOP.KEY=stop_jetty 
}


case "$1" in
  start)
	start
	;;
  stop)
	stop
	;;
  restart)
	stop;start;
	;;
  *)
	echo $"Usage: $0 {start|stop|restart}"
	exit 1
esac
exit 0
