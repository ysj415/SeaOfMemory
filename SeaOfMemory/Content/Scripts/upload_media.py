import requests
from requests_oauthlib import OAuth1

def upload_media(file_path, api_key, api_secret_key, access_token, access_token_secret):
    # OAuth1 인증 핸들러 생성
    auth = OAuth1(api_key, api_secret_key, access_token, access_token_secret)

    # 파일 읽기
    files = {
        'media': open(file_path, 'rb')
    }

    # 엔드포인트 URL 설정
    url = 'https://upload.twitter.com/1.1/media/upload.json'

    # POST 요청 보내기
    response = requests.post(url, auth=auth, files=files)

    # 응답 처리
    if response.status_code == 200:
        media_id = response.json().get('media_id_string')
        return media_id
    else:
        raise Exception(f'Error: {response.status_code} - {response.text}')