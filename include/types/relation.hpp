#pragma once

#include <osmpbf/osmformat.pb.h>

namespace parser {
struct Relation {
 public:
  Relation(google::protobuf::int64 from, google::protobuf::int64 via,
           google::protobuf::int64 to)
      : from(from), via(via), to(to) {}

  google::protobuf::int64 from;
  google::protobuf::int64 via;
  google::protobuf::int64 to;
};

struct Restriction : parser::Relation {
  Restriction(google::protobuf::int64 from, google::protobuf::int64 via,
              google::protobuf::int64 to, std::string type)
      : parser::Relation(from, via, to), type(type) {}

  std::string type;
};
}  // namespace parser