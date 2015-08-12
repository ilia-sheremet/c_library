// MESSAGE POSITION_TO_BLADE PACKING

#define MAVLINK_MSG_ID_POSITION_TO_BLADE 158

typedef struct __mavlink_position_to_blade_t
{
 uint16_t distance_blade; ///< Distance to blade in meters
 uint16_t distance_pillar; ///< Distance to wind turbine pillar in meters
 int16_t x_position; ///< Vibration levels on Y-axis
} mavlink_position_to_blade_t;

#define MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN 6
#define MAVLINK_MSG_ID_158_LEN 6

#define MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC 48
#define MAVLINK_MSG_ID_158_CRC 48



#define MAVLINK_MESSAGE_INFO_POSITION_TO_BLADE { \
	"POSITION_TO_BLADE", \
	3, \
	{  { "distance_blade", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_position_to_blade_t, distance_blade) }, \
         { "distance_pillar", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_position_to_blade_t, distance_pillar) }, \
         { "x_position", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_position_to_blade_t, x_position) }, \
         } \
}


/**
 * @brief Pack a position_to_blade message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param distance_blade Distance to blade in meters
 * @param distance_pillar Distance to wind turbine pillar in meters
 * @param x_position Vibration levels on Y-axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_to_blade_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t distance_blade, uint16_t distance_pillar, int16_t x_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN];
	_mav_put_uint16_t(buf, 0, distance_blade);
	_mav_put_uint16_t(buf, 2, distance_pillar);
	_mav_put_int16_t(buf, 4, x_position);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#else
	mavlink_position_to_blade_t packet;
	packet.distance_blade = distance_blade;
	packet.distance_pillar = distance_pillar;
	packet.x_position = x_position;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_TO_BLADE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
}

/**
 * @brief Pack a position_to_blade message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param distance_blade Distance to blade in meters
 * @param distance_pillar Distance to wind turbine pillar in meters
 * @param x_position Vibration levels on Y-axis
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_position_to_blade_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t distance_blade,uint16_t distance_pillar,int16_t x_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN];
	_mav_put_uint16_t(buf, 0, distance_blade);
	_mav_put_uint16_t(buf, 2, distance_pillar);
	_mav_put_int16_t(buf, 4, x_position);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#else
	mavlink_position_to_blade_t packet;
	packet.distance_blade = distance_blade;
	packet.distance_pillar = distance_pillar;
	packet.x_position = x_position;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_POSITION_TO_BLADE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
}

/**
 * @brief Encode a position_to_blade struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param position_to_blade C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_to_blade_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_position_to_blade_t* position_to_blade)
{
	return mavlink_msg_position_to_blade_pack(system_id, component_id, msg, position_to_blade->distance_blade, position_to_blade->distance_pillar, position_to_blade->x_position);
}

/**
 * @brief Encode a position_to_blade struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param position_to_blade C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_position_to_blade_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_position_to_blade_t* position_to_blade)
{
	return mavlink_msg_position_to_blade_pack_chan(system_id, component_id, chan, msg, position_to_blade->distance_blade, position_to_blade->distance_pillar, position_to_blade->x_position);
}

/**
 * @brief Send a position_to_blade message
 * @param chan MAVLink channel to send the message
 *
 * @param distance_blade Distance to blade in meters
 * @param distance_pillar Distance to wind turbine pillar in meters
 * @param x_position Vibration levels on Y-axis
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_position_to_blade_send(mavlink_channel_t chan, uint16_t distance_blade, uint16_t distance_pillar, int16_t x_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN];
	_mav_put_uint16_t(buf, 0, distance_blade);
	_mav_put_uint16_t(buf, 2, distance_pillar);
	_mav_put_int16_t(buf, 4, x_position);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
#else
	mavlink_position_to_blade_t packet;
	packet.distance_blade = distance_blade;
	packet.distance_pillar = distance_pillar;
	packet.x_position = x_position;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, (const char *)&packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, (const char *)&packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_position_to_blade_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t distance_blade, uint16_t distance_pillar, int16_t x_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, distance_blade);
	_mav_put_uint16_t(buf, 2, distance_pillar);
	_mav_put_int16_t(buf, 4, x_position);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, buf, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
#else
	mavlink_position_to_blade_t *packet = (mavlink_position_to_blade_t *)msgbuf;
	packet->distance_blade = distance_blade;
	packet->distance_pillar = distance_pillar;
	packet->x_position = x_position;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, (const char *)packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN, MAVLINK_MSG_ID_POSITION_TO_BLADE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POSITION_TO_BLADE, (const char *)packet, MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE POSITION_TO_BLADE UNPACKING


/**
 * @brief Get field distance_blade from position_to_blade message
 *
 * @return Distance to blade in meters
 */
static inline uint16_t mavlink_msg_position_to_blade_get_distance_blade(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field distance_pillar from position_to_blade message
 *
 * @return Distance to wind turbine pillar in meters
 */
static inline uint16_t mavlink_msg_position_to_blade_get_distance_pillar(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field x_position from position_to_blade message
 *
 * @return Vibration levels on Y-axis
 */
static inline int16_t mavlink_msg_position_to_blade_get_x_position(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Decode a position_to_blade message into a struct
 *
 * @param msg The message to decode
 * @param position_to_blade C-struct to decode the message contents into
 */
static inline void mavlink_msg_position_to_blade_decode(const mavlink_message_t* msg, mavlink_position_to_blade_t* position_to_blade)
{
#if MAVLINK_NEED_BYTE_SWAP
	position_to_blade->distance_blade = mavlink_msg_position_to_blade_get_distance_blade(msg);
	position_to_blade->distance_pillar = mavlink_msg_position_to_blade_get_distance_pillar(msg);
	position_to_blade->x_position = mavlink_msg_position_to_blade_get_x_position(msg);
#else
	memcpy(position_to_blade, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_POSITION_TO_BLADE_LEN);
#endif
}
