{
  "targets": [
    {
      "target_name": "addon",
      "sources": [ "src/binding.cc" ],
      'xcode_settings': {
        'OTHER_CFLAGS': [
          "-std=c++11",
          "-stdlib=libc++"
        ],
      }
    }
  ]
}
