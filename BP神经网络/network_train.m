function net = network_train(train_data,train_label )
% ���룺ѵ��ͼ��������label�������ѵ���õ�������

% BP����ѵ��
% ��ʼ������ṹ
layer=75;
net=newff(train_data,train_label,layer);
net.trainParam.epochs=1;
net.trainParam.lr=0.1;
net.trainParam.goal=0.001;
net.trainFcn='trainrp';
% ����ѵ��
net=train(net,train_data,train_label);
end

