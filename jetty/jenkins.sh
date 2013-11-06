export APP_HOME=$JETTY_HOME/webapps/jenkins
export JETTY_CONF=$APP_HOME/start.d/jenkins.conf
export JETTY_LOGS=$APP_HOME/start.d/logs
export JETTY_ARGS=jetty.port=9090 jetty.secure.port=9443
export JETTY_PID=$APP_HOME/start.d/jekins.pid
$JETTY_HOME/bin/jetty.sh -d $1
