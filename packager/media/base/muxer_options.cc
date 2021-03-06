// Copyright 2014 Google Inc. All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#include "packager/media/base/muxer_options.h"

namespace shaka {
namespace media {

MuxerOptions::MuxerOptions()
    : single_segment(false),
      segment_duration(0),
      fragment_duration(0),
      segment_sap_aligned(false),
      fragment_sap_aligned(false),
      num_subsegments_per_sidx(0),
      mp4_use_decoding_timestamp_in_timeline(false),
      bandwidth(0),
      webm_subsample_encryption(true) {}
MuxerOptions::~MuxerOptions() {}

}  // namespace media
}  // namespace shaka
