 '''
 # Instantiate the dataset builder
    builder_instance: DatasetBuilder = builder_cls(
        cache_dir=cache_dir,
        dataset_name=dataset_name,
        config_name=config_name,
        data_dir=data_dir,
        data_files=data_files,
        hash=dataset_module.hash,
        info=info,
        features=features,
        token=token,
        storage_options=storage_options,
        **builder_kwargs,
        **config_kwargs,
    )
'''

'''Fix'''

 # Instantiate the dataset builder
    builder_instance: DatasetBuilder = builder_cls(
        cache_dir=cache_dir,
        dataset_name=dataset_name,
        config_name=config_name,
        data_dir=data_dir,
        data_files=data_files,
        hash=dataset_module.hash,
        info=info,
        features=features,
        token=token,
        storage_options=storage_options,
        **{**builder_kwargs,
        **config_kwargs},
    )

'''
Merge dicts to config_kwargs overrides builder_kwargs, so no clash.
'''