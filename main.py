
import sys
import time
import logging


    
def make_env_rule(data_dir, config):
    env = SystemRule(data_dir, config)
    return env

def make_env_agenda(data_dir, config):
    env = UserAgenda(data_dir, config)
    return env

if __name__ == '__main__':
    parser = get_parser()
    argv = sys.argv[1:]
    args, _ = parser.parse_known_args(argv)
    

    init_logging_handler(args.log_dir)
    logging.debug(str(args))
    
    try:
        mp = mp.get_context('spawn')
    except RuntimeError:
        pass
    
    if args.pretrain:
	pass
       
    elif args.test:
	pass
                
    else: # training
        current_time = time.strftime("%Y-%m-%d-%H-%M-%S", time.localtime())
        logging.debug('train {}'.format(current_time))
    
	print("training start")
