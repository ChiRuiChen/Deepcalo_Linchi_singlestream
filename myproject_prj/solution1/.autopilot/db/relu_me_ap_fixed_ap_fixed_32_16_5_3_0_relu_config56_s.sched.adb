<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>relu_me_ap_fixed_ap_fixed_32_16_5_3_0_relu_config56_s</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>data_V_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>data.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>res_V_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>res.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>7</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>7</id>
						<name>tmp_V</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>63</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="10" tracking_level="0" version="0">
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second class_id="11" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="12" tracking_level="0" version="0">
										<first class_id="13" tracking_level="0" version="0">
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>63</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>tmp.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>17</item>
					<item>18</item>
				</oprand_edges>
				<opcode>read</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>2.18</m_delay>
				<m_topoIndex>1</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>8</id>
						<name>trunc_ln1494</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>67</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>67</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>31</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>19</item>
				</oprand_edges>
				<opcode>trunc</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>2</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>9</id>
						<name>icmp_ln1494</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>67</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>67</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>1</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>20</item>
					<item>22</item>
				</oprand_edges>
				<opcode>icmp</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>2.47</m_delay>
				<m_topoIndex>3</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>10</id>
						<name>out_data_V</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>67</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>67</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>out_data.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>31</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>23</item>
					<item>24</item>
					<item>26</item>
				</oprand_edges>
				<opcode>select</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.73</m_delay>
				<m_topoIndex>4</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>11</id>
						<name>tmp_V_64</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>67</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>67</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>tmp.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>27</item>
				</oprand_edges>
				<opcode>zext</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>5</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>12</id>
						<name>res_V_V_write_ln70</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>70</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>70</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>29</item>
					<item>30</item>
					<item>31</item>
				</oprand_edges>
				<opcode>write</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>2.18</m_delay>
				<m_topoIndex>6</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>14</id>
						<name>_ln72</name>
						<fileName>firmware/nnet_utils/nnet_activation_stream.h</fileName>
						<fileDirectory>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</fileDirectory>
						<lineNumber>72</lineNumber>
						<contextFuncName>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/silencekugelee05/hls4ml/train_recommended_electron_models_for_hls4ml/Deepcalo_Linchi</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>firmware/nnet_utils/nnet_activation_stream.h</first>
											<second>relu_me&amp;lt;ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, ap_fixed&amp;lt;32, 16, 5, 3, 0&amp;gt;, relu_config56&amp;gt;</second>
										</first>
										<second>72</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>7</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_10">
				<Value>
					<Obj>
						<type>2</type>
						<id>21</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>0</content>
			</item>
			<item class_id_reference="16" object_id="_11">
				<Value>
					<Obj>
						<type>2</type>
						<id>25</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>31</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>0</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_12">
				<Obj>
					<type>3</type>
					<id>15</id>
					<name>relu_me&lt;ap_fixed,ap_fixed&lt;32,16,5,3,0&gt;,relu_config56&gt;</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>7</count>
					<item_version>0</item_version>
					<item>7</item>
					<item>8</item>
					<item>9</item>
					<item>10</item>
					<item>11</item>
					<item>12</item>
					<item>14</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>10</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_13">
				<id>18</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>7</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_14">
				<id>19</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>8</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_15">
				<id>20</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>9</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_16">
				<id>22</id>
				<edge_type>1</edge_type>
				<source_obj>21</source_obj>
				<sink_obj>9</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_17">
				<id>23</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>10</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_18">
				<id>24</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>10</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_19">
				<id>26</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>10</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_20">
				<id>27</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>11</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_21">
				<id>30</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>12</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_22">
				<id>31</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>12</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_23">
			<mId>1</mId>
			<mTag>relu_me&lt;ap_fixed,ap_fixed&lt;32,16,5,3,0&gt;,relu_config56&gt;</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>15</item>
			</basic_blocks>
			<mII>1</mII>
			<mDepth>3</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>2</mMinLatency>
			<mMaxLatency>2</mMaxLatency>
			<mIsDfPipe>0</mIsDfPipe>
			<mDfPipe class_id="-1"></mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="-1"></fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="26" tracking_level="0" version="0">
		<count>7</count>
		<item_version>0</item_version>
		<item class_id="27" tracking_level="0" version="0">
			<first>7</first>
			<second class_id="28" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>8</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>9</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>10</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>11</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>12</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>14</first>
			<second>
				<first>2</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="29" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="30" tracking_level="0" version="0">
			<first>15</first>
			<second class_id="31" tracking_level="0" version="0">
				<first>0</first>
				<second>2</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="32" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="33" tracking_level="1" version="0" object_id="_24">
			<region_name>relu_me&lt;ap_fixed,ap_fixed&lt;32,16,5,3,0&gt;,relu_config56&gt;</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>15</item>
			</basic_blocks>
			<nodes>
				<count>0</count>
				<item_version>0</item_version>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>8</region_type>
			<interval>1</interval>
			<pipe_depth>3</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="34" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="35" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="36" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="37" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_port_io_nodes>
	<port2core class_id="38" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>0</count>
		<item_version>0</item_version>
	</node2core>
</syndb>
</boost_serialization>

