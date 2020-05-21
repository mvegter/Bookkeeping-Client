=begin
#ALICE Bookkeeping

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 0.0.0

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'date'

module OpenapiClient
  # Describes an intervention or an event that happened.
  class Log
    # The unique identifier of this entity.
    attr_accessor :id

    # Title of the log.
    attr_accessor :title

    # Body of the log.
    attr_accessor :text

    attr_accessor :origin

    # A list of Tag objects.
    attr_accessor :tags

    # The unique identifier of this entity.
    attr_accessor :root_log_id

    # The unique identifier of this entity.
    attr_accessor :parent_log_id

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'id' => :'id',
        :'title' => :'title',
        :'text' => :'text',
        :'origin' => :'origin',
        :'tags' => :'tags',
        :'root_log_id' => :'rootLogId',
        :'parent_log_id' => :'parentLogId'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'id' => :'Integer',
        :'title' => :'String',
        :'text' => :'String',
        :'origin' => :'LogOrigin',
        :'tags' => :'Array<Tag>',
        :'root_log_id' => :'Integer',
        :'parent_log_id' => :'Integer'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::Log` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::Log`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'title')
        self.title = attributes[:'title']
      end

      if attributes.key?(:'text')
        self.text = attributes[:'text']
      end

      if attributes.key?(:'origin')
        self.origin = attributes[:'origin']
      end

      if attributes.key?(:'tags')
        if (value = attributes[:'tags']).is_a?(Array)
          self.tags = value
        end
      end

      if attributes.key?(:'root_log_id')
        self.root_log_id = attributes[:'root_log_id']
      end

      if attributes.key?(:'parent_log_id')
        self.parent_log_id = attributes[:'parent_log_id']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @id < 1
        invalid_properties.push('invalid value for "id", must be greater than or equal to 1.')
      end

      if @title.nil?
        invalid_properties.push('invalid value for "title", title cannot be nil.')
      end

      if @title.to_s.length < 3
        invalid_properties.push('invalid value for "title", the character length must be great than or equal to 3.')
      end

      if @text.nil?
        invalid_properties.push('invalid value for "text", text cannot be nil.')
      end

      if @text.to_s.length < 3
        invalid_properties.push('invalid value for "text", the character length must be great than or equal to 3.')
      end

      if @origin.nil?
        invalid_properties.push('invalid value for "origin", origin cannot be nil.')
      end

      if @tags.nil?
        invalid_properties.push('invalid value for "tags", tags cannot be nil.')
      end

      if @root_log_id.nil?
        invalid_properties.push('invalid value for "root_log_id", root_log_id cannot be nil.')
      end

      if @root_log_id < 1
        invalid_properties.push('invalid value for "root_log_id", must be greater than or equal to 1.')
      end

      if @parent_log_id.nil?
        invalid_properties.push('invalid value for "parent_log_id", parent_log_id cannot be nil.')
      end

      if @parent_log_id < 1
        invalid_properties.push('invalid value for "parent_log_id", must be greater than or equal to 1.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @id.nil?
      return false if @id < 1
      return false if @title.nil?
      return false if @title.to_s.length < 3
      return false if @text.nil?
      return false if @text.to_s.length < 3
      return false if @origin.nil?
      return false if @tags.nil?
      return false if @root_log_id.nil?
      return false if @root_log_id < 1
      return false if @parent_log_id.nil?
      return false if @parent_log_id < 1
      true
    end

    # Custom attribute writer method with validation
    # @param [Object] id Value to be assigned
    def id=(id)
      if id.nil?
        fail ArgumentError, 'id cannot be nil'
      end

      if id < 1
        fail ArgumentError, 'invalid value for "id", must be greater than or equal to 1.'
      end

      @id = id
    end

    # Custom attribute writer method with validation
    # @param [Object] title Value to be assigned
    def title=(title)
      if title.nil?
        fail ArgumentError, 'title cannot be nil'
      end

      if title.to_s.length < 3
        fail ArgumentError, 'invalid value for "title", the character length must be great than or equal to 3.'
      end

      @title = title
    end

    # Custom attribute writer method with validation
    # @param [Object] text Value to be assigned
    def text=(text)
      if text.nil?
        fail ArgumentError, 'text cannot be nil'
      end

      if text.to_s.length < 3
        fail ArgumentError, 'invalid value for "text", the character length must be great than or equal to 3.'
      end

      @text = text
    end

    # Custom attribute writer method with validation
    # @param [Object] root_log_id Value to be assigned
    def root_log_id=(root_log_id)
      if root_log_id.nil?
        fail ArgumentError, 'root_log_id cannot be nil'
      end

      if root_log_id < 1
        fail ArgumentError, 'invalid value for "root_log_id", must be greater than or equal to 1.'
      end

      @root_log_id = root_log_id
    end

    # Custom attribute writer method with validation
    # @param [Object] parent_log_id Value to be assigned
    def parent_log_id=(parent_log_id)
      if parent_log_id.nil?
        fail ArgumentError, 'parent_log_id cannot be nil'
      end

      if parent_log_id < 1
        fail ArgumentError, 'invalid value for "parent_log_id", must be greater than or equal to 1.'
      end

      @parent_log_id = parent_log_id
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          id == o.id &&
          title == o.title &&
          text == o.text &&
          origin == o.origin &&
          tags == o.tags &&
          root_log_id == o.root_log_id &&
          parent_log_id == o.parent_log_id
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [id, title, text, origin, tags, root_log_id, parent_log_id].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        OpenapiClient.const_get(type).build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end
        
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
