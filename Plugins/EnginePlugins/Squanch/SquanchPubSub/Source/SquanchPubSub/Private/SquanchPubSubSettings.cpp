#include "SquanchPubSubSettings.h"

USquanchPubSubSettings::USquanchPubSubSettings() {
    this->PubSubUrl = TEXT("https://pubsub.googleapis.com/v1/projects/");
    this->ProjectID = TEXT("test-analytics-338808");
    this->GCloudPrivateKey = TEXT("-----BEGIN PRIVATE KEY-----\nMIIEvwIBADANBgkqhkiG9w0BAQEFAASCBKkwggSlAgEAAoIBAQCVWsJ9BBNku3V4\n25DoRmgIQefql0aRI2OlkDAXwrf00QV0pZqbZlhx2K7dPWMFnqeeF6SgF9ZQilEL\nnN3sio3rrwW1/3RznPC+dBzcSgZ1KNu5HmYXhRLCE3eiwq/SWI0JM8n3GFDZ7/NZ\nB9WbiDbRIX5JHXi3n3o4OMqRCIgJ8W7zAVZnXeCcYwpn4IBuSdAd6RGNGG28F584\ngUme+PlkUn4LVXRbdASbcWxxjSQqbI+BVp1s3jTdLWANT2QZo/pdbB1RODjubB2l\ngFJYhLEZz+wu7v0sn8dclpSeSNv8qCIwL1RDk9zh42ShX4c30PHXSsiVaQ6BC/Of\nTKvECgO7AgMBAAECggEACEGvNMgP5maylM7WkPCreaFjF8XrIcTqElIJRpb+ImuX\nuJ4bEPI0e362FAb7vWjK7WNzN2J595Pd7R1r61Kxi9DuKOSJZIbNjEnQ+qChAMMU\neoRisnQp2E7JM1c97wv0KAkT5jQS7Clms4pKVcHO/fqzB4m4jbYkRI1nLWNiWeJI\nV/6MFNNotyzwFC/8E/raMgtxhXq1sVYMK50m5Rv2hg7OtdDU4kYfNV+HupZWc79s\nPZsrSsVKMk1razmlPaOdvOCwC6ue7Avxw0/rvluvNS1sSaFgzADunSMhDJbn3+gd\n67ESK1oIGW0db/zur2gaz8U6EzCxlBI5OBEUT4NHMQKBgQDFk9EHE+ekV1ke/YPJ\noTqolyp6qbXxJ8paERCIz+s7ZdlPXNnVjkxwr7dmPAcaNMyHvCxRY6/eKkfrANCN\nUP46sOIDZ4214qmyUGOZwcYhIo4ykiG/q6ZvSCJixpd94LWphcvLORbZGmZGvZaf\nps6QmkZbeO6GnkYrs3sKI3dWwwKBgQDBhJNMeSjTKE4EfaXT/Gf2EmS9r5Mos/nJ\nB2ipeQAPZHuHz188gZ52xid4CJRPMy20LYAn3MP/iJkqGp9zaonz7V/+VIbtn80I\nG7AvEL5PdpyPft2aZPD2bF9oV06xpGQ+4SaQ2rVMdKkTowjN0oaRlBE5/q01y8Bj\n6s79g31/qQKBgQC4DBcmSbN5kmiRhsTR+V/EFnTaqOa0S0WjGsxVNaHBxgFlfW/q\nEFFCk1z7XiWbkt2H/5ElDACSqr4tuqeLTIxWLdmMJFWMviUn1tzBKRGgYikmEJxh\niMtUVFS7wJT0DHQNA3awy3BuMrpdYVRDSkaXyy6JHSDMw/lH0jxmWF1dswKBgQCI\nTSiypGPs1madIyK5vP48g5gRQqkT8i/tOBqvw1oXfV7EuXsK0wEaB1elY+WSIyn9\nzk6FxSkHwt6emUHVuSSRepAyQrcGh5eSLm5ZuCFTNufu6hyLsq1F4+8PPu9ej7tL\nzqmrPWCVCVZNTnfVAINn5jJ79rVpPqmztp80UHkEgQKBgQCMKw9hs9+IgK8dPOh7\nHZuYtgATTViOYCLKOlmeSvmb8gc8yg2TBweXm0fjo/Zd4ylTegfHqNWQ1mG+x1qt\nJkG65VQaAvgYX0KbYZHiD2RfznK7wBpU6EpTUtr+pD3lVa+oAK++qcOPW+yeu4uK\nNc/lO/tB4SY4xcjAIyz6HgpVeA==\n-----END PRIVATE KEY-----\n");
    this->GCloudPrivateKeyId = TEXT("519679b52163a4f52d04fb468ea3d8e805fbc214");
    this->GCloudServiceAccountEmail = TEXT("perf-pubsub@test-analytics-338808.iam.gserviceaccount.com");
    this->GCloudTokenURI = TEXT("https://oauth2.googleapis.com/token");
    this->OfflineRetryMinutes = 5;
    this->MaxMessageLifetimeSeconds = 30;
    this->MaxMessageSize = 1000000;
    this->MaxMemoryUsage = 5000000;
}

