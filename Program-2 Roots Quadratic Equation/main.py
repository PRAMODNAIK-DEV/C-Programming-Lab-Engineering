from fastapi import FastAPI

backend_app = FastAPI()

backend_app.get("/")
def root():
    # a = 2+3
    return {"message": "Hello, World!"}
