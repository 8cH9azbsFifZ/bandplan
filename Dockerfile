FROM debian:buster-slim
MAINTAINER Gerolf Ziegenhain "gerolf.ziegenhain@gmail.com"

RUN apt-get update
RUN apt-get -y install libxml2-utils xsltproc build-essential 

WORKDIR /usr/src/app
ADD . .
