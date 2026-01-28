# initial code

'''
if keep_in_memory and cache_file_name is not None:
    raise ValueError("Please use either `keep_in_memory` or `cache_file_name` but not both.")

    if num_proc == 0:
        num_proc = None
    elif num_proc is not None and num_proc < 0:
        raise ValueError("num_proc must be >= 0 or None.")
'''

# 7756 fix (multiprocessing hang on bad start_method)
# (added before if-else block)

if num_proc and num_proc > 1 :
    try :
        import multiprocessing as mp 
        if mp.get_start_method() not in ['forkserver','spawn'] :
            logger.warning ("map(num_proc > 1) may hang. fallback to 1")

            num_proc = 1

    except :
        (ImportError, RuntimeError) :
        num_proc = 1

'''
PR link - https://github.com/huggingface/datasets/pull/7967#issue-3863579646
Issue link - https://github.com/huggingface/datasets/issues/7756
'''
