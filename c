#!/usr/bin/env bash

if [ "$1" = '' ] #start server only
then
	source './venv/bin/activate'

elif [ "$1" = "-b" ] #start server and activate 
then 
	source './venv/bin/activate'
	cd dproj
	python manage.py runserver 0.0.0.0:8000

elif [ "$1" = "-bf" ] #start server, react and activate 
then 
        source './venv/bin/activate'
        cd dproj
        python manage.py runserver 0.0.0.0:8000
	cd reactapp
	yarn start

elif [ "$1" = "-d" ] #deactivate
then
	deactivate
else
	echo "-b backend"
	echo "-bf backend and frontend"
	echo "-d deactivate"
fi


