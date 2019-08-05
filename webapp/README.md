go build webapp.go
docker build . -t webapp
docker run -d webapp
