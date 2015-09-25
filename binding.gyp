{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "clock_isr.cc"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
