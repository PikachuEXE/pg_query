/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     UIDENT = 259,
     FCONST = 260,
     SCONST = 261,
     USCONST = 262,
     BCONST = 263,
     XCONST = 264,
     Op = 265,
     ICONST = 266,
     PARAM = 267,
     TYPECAST = 268,
     DOT_DOT = 269,
     COLON_EQUALS = 270,
     EQUALS_GREATER = 271,
     LESS_EQUALS = 272,
     GREATER_EQUALS = 273,
     NOT_EQUALS = 274,
     SQL_COMMENT = 275,
     C_COMMENT = 276,
     ABORT_P = 277,
     ABSENT = 278,
     ABSOLUTE_P = 279,
     ACCESS = 280,
     ACTION = 281,
     ADD_P = 282,
     ADMIN = 283,
     AFTER = 284,
     AGGREGATE = 285,
     ALL = 286,
     ALSO = 287,
     ALTER = 288,
     ALWAYS = 289,
     ANALYSE = 290,
     ANALYZE = 291,
     AND = 292,
     ANY = 293,
     ARRAY = 294,
     AS = 295,
     ASC = 296,
     ASENSITIVE = 297,
     ASSERTION = 298,
     ASSIGNMENT = 299,
     ASYMMETRIC = 300,
     ATOMIC = 301,
     AT = 302,
     ATTACH = 303,
     ATTRIBUTE = 304,
     AUTHORIZATION = 305,
     BACKWARD = 306,
     BEFORE = 307,
     BEGIN_P = 308,
     BETWEEN = 309,
     BIGINT = 310,
     BINARY = 311,
     BIT = 312,
     BOOLEAN_P = 313,
     BOTH = 314,
     BREADTH = 315,
     BY = 316,
     CACHE = 317,
     CALL = 318,
     CALLED = 319,
     CASCADE = 320,
     CASCADED = 321,
     CASE = 322,
     CAST = 323,
     CATALOG_P = 324,
     CHAIN = 325,
     CHAR_P = 326,
     CHARACTER = 327,
     CHARACTERISTICS = 328,
     CHECK = 329,
     CHECKPOINT = 330,
     CLASS = 331,
     CLOSE = 332,
     CLUSTER = 333,
     COALESCE = 334,
     COLLATE = 335,
     COLLATION = 336,
     COLUMN = 337,
     COLUMNS = 338,
     COMMENT = 339,
     COMMENTS = 340,
     COMMIT = 341,
     COMMITTED = 342,
     COMPRESSION = 343,
     CONCURRENTLY = 344,
     CONDITIONAL = 345,
     CONFIGURATION = 346,
     CONFLICT = 347,
     CONNECTION = 348,
     CONSTRAINT = 349,
     CONSTRAINTS = 350,
     CONTENT_P = 351,
     CONTINUE_P = 352,
     CONVERSION_P = 353,
     COPY = 354,
     COST = 355,
     CREATE = 356,
     CROSS = 357,
     CSV = 358,
     CUBE = 359,
     CURRENT_P = 360,
     CURRENT_CATALOG = 361,
     CURRENT_DATE = 362,
     CURRENT_ROLE = 363,
     CURRENT_SCHEMA = 364,
     CURRENT_TIME = 365,
     CURRENT_TIMESTAMP = 366,
     CURRENT_USER = 367,
     CURSOR = 368,
     CYCLE = 369,
     DATA_P = 370,
     DATABASE = 371,
     DAY_P = 372,
     DEALLOCATE = 373,
     DEC = 374,
     DECIMAL_P = 375,
     DECLARE = 376,
     DEFAULT = 377,
     DEFAULTS = 378,
     DEFERRABLE = 379,
     DEFERRED = 380,
     DEFINER = 381,
     DELETE_P = 382,
     DELIMITER = 383,
     DELIMITERS = 384,
     DEPENDS = 385,
     DEPTH = 386,
     DESC = 387,
     DETACH = 388,
     DICTIONARY = 389,
     DISABLE_P = 390,
     DISCARD = 391,
     DISTINCT = 392,
     DO = 393,
     DOCUMENT_P = 394,
     DOMAIN_P = 395,
     DOUBLE_P = 396,
     DROP = 397,
     EACH = 398,
     ELSE = 399,
     EMPTY_P = 400,
     ENABLE_P = 401,
     ENCODING = 402,
     ENCRYPTED = 403,
     END_P = 404,
     ENUM_P = 405,
     ERROR_P = 406,
     ESCAPE = 407,
     EVENT = 408,
     EXCEPT = 409,
     EXCLUDE = 410,
     EXCLUDING = 411,
     EXCLUSIVE = 412,
     EXECUTE = 413,
     EXISTS = 414,
     EXPLAIN = 415,
     EXPRESSION = 416,
     EXTENSION = 417,
     EXTERNAL = 418,
     EXTRACT = 419,
     FALSE_P = 420,
     FAMILY = 421,
     FETCH = 422,
     FILTER = 423,
     FINALIZE = 424,
     FIRST_P = 425,
     FLOAT_P = 426,
     FOLLOWING = 427,
     FOR = 428,
     FORCE = 429,
     FOREIGN = 430,
     FORMAT = 431,
     FORWARD = 432,
     FREEZE = 433,
     FROM = 434,
     FULL = 435,
     FUNCTION = 436,
     FUNCTIONS = 437,
     GENERATED = 438,
     GLOBAL = 439,
     GRANT = 440,
     GRANTED = 441,
     GREATEST = 442,
     GROUP_P = 443,
     GROUPING = 444,
     GROUPS = 445,
     HANDLER = 446,
     HAVING = 447,
     HEADER_P = 448,
     HOLD = 449,
     HOUR_P = 450,
     IDENTITY_P = 451,
     IF_P = 452,
     ILIKE = 453,
     IMMEDIATE = 454,
     IMMUTABLE = 455,
     IMPLICIT_P = 456,
     IMPORT_P = 457,
     IN_P = 458,
     INCLUDE = 459,
     INCLUDING = 460,
     INCREMENT = 461,
     INDENT = 462,
     INDEX = 463,
     INDEXES = 464,
     INHERIT = 465,
     INHERITS = 466,
     INITIALLY = 467,
     INLINE_P = 468,
     INNER_P = 469,
     INOUT = 470,
     INPUT_P = 471,
     INSENSITIVE = 472,
     INSERT = 473,
     INSTEAD = 474,
     INT_P = 475,
     INTEGER = 476,
     INTERSECT = 477,
     INTERVAL = 478,
     INTO = 479,
     INVOKER = 480,
     IS = 481,
     ISNULL = 482,
     ISOLATION = 483,
     JOIN = 484,
     JSON = 485,
     JSON_ARRAY = 486,
     JSON_ARRAYAGG = 487,
     JSON_EXISTS = 488,
     JSON_OBJECT = 489,
     JSON_OBJECTAGG = 490,
     JSON_QUERY = 491,
     JSON_SCALAR = 492,
     JSON_SERIALIZE = 493,
     JSON_TABLE = 494,
     JSON_VALUE = 495,
     KEEP = 496,
     KEY = 497,
     KEYS = 498,
     LABEL = 499,
     LANGUAGE = 500,
     LARGE_P = 501,
     LAST_P = 502,
     LATERAL_P = 503,
     LEADING = 504,
     LEAKPROOF = 505,
     LEAST = 506,
     LEFT = 507,
     LEVEL = 508,
     LIKE = 509,
     LIMIT = 510,
     LISTEN = 511,
     LOAD = 512,
     LOCAL = 513,
     LOCALTIME = 514,
     LOCALTIMESTAMP = 515,
     LOCATION = 516,
     LOCK_P = 517,
     LOCKED = 518,
     LOGGED = 519,
     MAPPING = 520,
     MATCH = 521,
     MATCHED = 522,
     MATERIALIZED = 523,
     MAXVALUE = 524,
     MERGE = 525,
     MERGE_ACTION = 526,
     METHOD = 527,
     MINUTE_P = 528,
     MINVALUE = 529,
     MODE = 530,
     MONTH_P = 531,
     MOVE = 532,
     NAME_P = 533,
     NAMES = 534,
     NATIONAL = 535,
     NATURAL = 536,
     NCHAR = 537,
     NESTED = 538,
     NEW = 539,
     NEXT = 540,
     NFC = 541,
     NFD = 542,
     NFKC = 543,
     NFKD = 544,
     NO = 545,
     NONE = 546,
     NORMALIZE = 547,
     NORMALIZED = 548,
     NOT = 549,
     NOTHING = 550,
     NOTIFY = 551,
     NOTNULL = 552,
     NOWAIT = 553,
     NULL_P = 554,
     NULLIF = 555,
     NULLS_P = 556,
     NUMERIC = 557,
     OBJECT_P = 558,
     OF = 559,
     OFF = 560,
     OFFSET = 561,
     OIDS = 562,
     OLD = 563,
     OMIT = 564,
     ON = 565,
     ONLY = 566,
     OPERATOR = 567,
     OPTION = 568,
     OPTIONS = 569,
     OR = 570,
     ORDER = 571,
     ORDINALITY = 572,
     OTHERS = 573,
     OUT_P = 574,
     OUTER_P = 575,
     OVER = 576,
     OVERLAPS = 577,
     OVERLAY = 578,
     OVERRIDING = 579,
     OWNED = 580,
     OWNER = 581,
     PARALLEL = 582,
     PARAMETER = 583,
     PARSER = 584,
     PARTIAL = 585,
     PARTITION = 586,
     PASSING = 587,
     PASSWORD = 588,
     PATH = 589,
     PLACING = 590,
     PLAN = 591,
     PLANS = 592,
     POLICY = 593,
     POSITION = 594,
     PRECEDING = 595,
     PRECISION = 596,
     PRESERVE = 597,
     PREPARE = 598,
     PREPARED = 599,
     PRIMARY = 600,
     PRIOR = 601,
     PRIVILEGES = 602,
     PROCEDURAL = 603,
     PROCEDURE = 604,
     PROCEDURES = 605,
     PROGRAM = 606,
     PUBLICATION = 607,
     QUOTE = 608,
     QUOTES = 609,
     RANGE = 610,
     READ = 611,
     REAL = 612,
     REASSIGN = 613,
     RECHECK = 614,
     RECURSIVE = 615,
     REF_P = 616,
     REFERENCES = 617,
     REFERENCING = 618,
     REFRESH = 619,
     REINDEX = 620,
     RELATIVE_P = 621,
     RELEASE = 622,
     RENAME = 623,
     REPEATABLE = 624,
     REPLACE = 625,
     REPLICA = 626,
     RESET = 627,
     RESTART = 628,
     RESTRICT = 629,
     RETURN = 630,
     RETURNING = 631,
     RETURNS = 632,
     REVOKE = 633,
     RIGHT = 634,
     ROLE = 635,
     ROLLBACK = 636,
     ROLLUP = 637,
     ROUTINE = 638,
     ROUTINES = 639,
     ROW = 640,
     ROWS = 641,
     RULE = 642,
     SAVEPOINT = 643,
     SCALAR = 644,
     SCHEMA = 645,
     SCHEMAS = 646,
     SCROLL = 647,
     SEARCH = 648,
     SECOND_P = 649,
     SECURITY = 650,
     SELECT = 651,
     SEQUENCE = 652,
     SEQUENCES = 653,
     SERIALIZABLE = 654,
     SERVER = 655,
     SESSION = 656,
     SESSION_USER = 657,
     SET = 658,
     SETS = 659,
     SETOF = 660,
     SHARE = 661,
     SHOW = 662,
     SIMILAR = 663,
     SIMPLE = 664,
     SKIP = 665,
     SMALLINT = 666,
     SNAPSHOT = 667,
     SOME = 668,
     SOURCE = 669,
     SQL_P = 670,
     STABLE = 671,
     STANDALONE_P = 672,
     START = 673,
     STATEMENT = 674,
     STATISTICS = 675,
     STDIN = 676,
     STDOUT = 677,
     STORAGE = 678,
     STORED = 679,
     STRICT_P = 680,
     STRING_P = 681,
     STRIP_P = 682,
     SUBSCRIPTION = 683,
     SUBSTRING = 684,
     SUPPORT = 685,
     SYMMETRIC = 686,
     SYSID = 687,
     SYSTEM_P = 688,
     SYSTEM_USER = 689,
     TABLE = 690,
     TABLES = 691,
     TABLESAMPLE = 692,
     TABLESPACE = 693,
     TARGET = 694,
     TEMP = 695,
     TEMPLATE = 696,
     TEMPORARY = 697,
     TEXT_P = 698,
     THEN = 699,
     TIES = 700,
     TIME = 701,
     TIMESTAMP = 702,
     TO = 703,
     TRAILING = 704,
     TRANSACTION = 705,
     TRANSFORM = 706,
     TREAT = 707,
     TRIGGER = 708,
     TRIM = 709,
     TRUE_P = 710,
     TRUNCATE = 711,
     TRUSTED = 712,
     TYPE_P = 713,
     TYPES_P = 714,
     UESCAPE = 715,
     UNBOUNDED = 716,
     UNCONDITIONAL = 717,
     UNCOMMITTED = 718,
     UNENCRYPTED = 719,
     UNION = 720,
     UNIQUE = 721,
     UNKNOWN = 722,
     UNLISTEN = 723,
     UNLOGGED = 724,
     UNTIL = 725,
     UPDATE = 726,
     USER = 727,
     USING = 728,
     VACUUM = 729,
     VALID = 730,
     VALIDATE = 731,
     VALIDATOR = 732,
     VALUE_P = 733,
     VALUES = 734,
     VARCHAR = 735,
     VARIADIC = 736,
     VARYING = 737,
     VERBOSE = 738,
     VERSION_P = 739,
     VIEW = 740,
     VIEWS = 741,
     VOLATILE = 742,
     WHEN = 743,
     WHERE = 744,
     WHITESPACE_P = 745,
     WINDOW = 746,
     WITH = 747,
     WITHIN = 748,
     WITHOUT = 749,
     WORK = 750,
     WRAPPER = 751,
     WRITE = 752,
     XML_P = 753,
     XMLATTRIBUTES = 754,
     XMLCONCAT = 755,
     XMLELEMENT = 756,
     XMLEXISTS = 757,
     XMLFOREST = 758,
     XMLNAMESPACES = 759,
     XMLPARSE = 760,
     XMLPI = 761,
     XMLROOT = 762,
     XMLSERIALIZE = 763,
     XMLTABLE = 764,
     YEAR_P = 765,
     YES_P = 766,
     ZONE = 767,
     FORMAT_LA = 768,
     NOT_LA = 769,
     NULLS_LA = 770,
     WITH_LA = 771,
     WITHOUT_LA = 772,
     MODE_TYPE_NAME = 773,
     MODE_PLPGSQL_EXPR = 774,
     MODE_PLPGSQL_ASSIGN1 = 775,
     MODE_PLPGSQL_ASSIGN2 = 776,
     MODE_PLPGSQL_ASSIGN3 = 777,
     UMINUS = 778
   };
#endif
/* Tokens.  */
#define IDENT 258
#define UIDENT 259
#define FCONST 260
#define SCONST 261
#define USCONST 262
#define BCONST 263
#define XCONST 264
#define Op 265
#define ICONST 266
#define PARAM 267
#define TYPECAST 268
#define DOT_DOT 269
#define COLON_EQUALS 270
#define EQUALS_GREATER 271
#define LESS_EQUALS 272
#define GREATER_EQUALS 273
#define NOT_EQUALS 274
#define SQL_COMMENT 275
#define C_COMMENT 276
#define ABORT_P 277
#define ABSENT 278
#define ABSOLUTE_P 279
#define ACCESS 280
#define ACTION 281
#define ADD_P 282
#define ADMIN 283
#define AFTER 284
#define AGGREGATE 285
#define ALL 286
#define ALSO 287
#define ALTER 288
#define ALWAYS 289
#define ANALYSE 290
#define ANALYZE 291
#define AND 292
#define ANY 293
#define ARRAY 294
#define AS 295
#define ASC 296
#define ASENSITIVE 297
#define ASSERTION 298
#define ASSIGNMENT 299
#define ASYMMETRIC 300
#define ATOMIC 301
#define AT 302
#define ATTACH 303
#define ATTRIBUTE 304
#define AUTHORIZATION 305
#define BACKWARD 306
#define BEFORE 307
#define BEGIN_P 308
#define BETWEEN 309
#define BIGINT 310
#define BINARY 311
#define BIT 312
#define BOOLEAN_P 313
#define BOTH 314
#define BREADTH 315
#define BY 316
#define CACHE 317
#define CALL 318
#define CALLED 319
#define CASCADE 320
#define CASCADED 321
#define CASE 322
#define CAST 323
#define CATALOG_P 324
#define CHAIN 325
#define CHAR_P 326
#define CHARACTER 327
#define CHARACTERISTICS 328
#define CHECK 329
#define CHECKPOINT 330
#define CLASS 331
#define CLOSE 332
#define CLUSTER 333
#define COALESCE 334
#define COLLATE 335
#define COLLATION 336
#define COLUMN 337
#define COLUMNS 338
#define COMMENT 339
#define COMMENTS 340
#define COMMIT 341
#define COMMITTED 342
#define COMPRESSION 343
#define CONCURRENTLY 344
#define CONDITIONAL 345
#define CONFIGURATION 346
#define CONFLICT 347
#define CONNECTION 348
#define CONSTRAINT 349
#define CONSTRAINTS 350
#define CONTENT_P 351
#define CONTINUE_P 352
#define CONVERSION_P 353
#define COPY 354
#define COST 355
#define CREATE 356
#define CROSS 357
#define CSV 358
#define CUBE 359
#define CURRENT_P 360
#define CURRENT_CATALOG 361
#define CURRENT_DATE 362
#define CURRENT_ROLE 363
#define CURRENT_SCHEMA 364
#define CURRENT_TIME 365
#define CURRENT_TIMESTAMP 366
#define CURRENT_USER 367
#define CURSOR 368
#define CYCLE 369
#define DATA_P 370
#define DATABASE 371
#define DAY_P 372
#define DEALLOCATE 373
#define DEC 374
#define DECIMAL_P 375
#define DECLARE 376
#define DEFAULT 377
#define DEFAULTS 378
#define DEFERRABLE 379
#define DEFERRED 380
#define DEFINER 381
#define DELETE_P 382
#define DELIMITER 383
#define DELIMITERS 384
#define DEPENDS 385
#define DEPTH 386
#define DESC 387
#define DETACH 388
#define DICTIONARY 389
#define DISABLE_P 390
#define DISCARD 391
#define DISTINCT 392
#define DO 393
#define DOCUMENT_P 394
#define DOMAIN_P 395
#define DOUBLE_P 396
#define DROP 397
#define EACH 398
#define ELSE 399
#define EMPTY_P 400
#define ENABLE_P 401
#define ENCODING 402
#define ENCRYPTED 403
#define END_P 404
#define ENUM_P 405
#define ERROR_P 406
#define ESCAPE 407
#define EVENT 408
#define EXCEPT 409
#define EXCLUDE 410
#define EXCLUDING 411
#define EXCLUSIVE 412
#define EXECUTE 413
#define EXISTS 414
#define EXPLAIN 415
#define EXPRESSION 416
#define EXTENSION 417
#define EXTERNAL 418
#define EXTRACT 419
#define FALSE_P 420
#define FAMILY 421
#define FETCH 422
#define FILTER 423
#define FINALIZE 424
#define FIRST_P 425
#define FLOAT_P 426
#define FOLLOWING 427
#define FOR 428
#define FORCE 429
#define FOREIGN 430
#define FORMAT 431
#define FORWARD 432
#define FREEZE 433
#define FROM 434
#define FULL 435
#define FUNCTION 436
#define FUNCTIONS 437
#define GENERATED 438
#define GLOBAL 439
#define GRANT 440
#define GRANTED 441
#define GREATEST 442
#define GROUP_P 443
#define GROUPING 444
#define GROUPS 445
#define HANDLER 446
#define HAVING 447
#define HEADER_P 448
#define HOLD 449
#define HOUR_P 450
#define IDENTITY_P 451
#define IF_P 452
#define ILIKE 453
#define IMMEDIATE 454
#define IMMUTABLE 455
#define IMPLICIT_P 456
#define IMPORT_P 457
#define IN_P 458
#define INCLUDE 459
#define INCLUDING 460
#define INCREMENT 461
#define INDENT 462
#define INDEX 463
#define INDEXES 464
#define INHERIT 465
#define INHERITS 466
#define INITIALLY 467
#define INLINE_P 468
#define INNER_P 469
#define INOUT 470
#define INPUT_P 471
#define INSENSITIVE 472
#define INSERT 473
#define INSTEAD 474
#define INT_P 475
#define INTEGER 476
#define INTERSECT 477
#define INTERVAL 478
#define INTO 479
#define INVOKER 480
#define IS 481
#define ISNULL 482
#define ISOLATION 483
#define JOIN 484
#define JSON 485
#define JSON_ARRAY 486
#define JSON_ARRAYAGG 487
#define JSON_EXISTS 488
#define JSON_OBJECT 489
#define JSON_OBJECTAGG 490
#define JSON_QUERY 491
#define JSON_SCALAR 492
#define JSON_SERIALIZE 493
#define JSON_TABLE 494
#define JSON_VALUE 495
#define KEEP 496
#define KEY 497
#define KEYS 498
#define LABEL 499
#define LANGUAGE 500
#define LARGE_P 501
#define LAST_P 502
#define LATERAL_P 503
#define LEADING 504
#define LEAKPROOF 505
#define LEAST 506
#define LEFT 507
#define LEVEL 508
#define LIKE 509
#define LIMIT 510
#define LISTEN 511
#define LOAD 512
#define LOCAL 513
#define LOCALTIME 514
#define LOCALTIMESTAMP 515
#define LOCATION 516
#define LOCK_P 517
#define LOCKED 518
#define LOGGED 519
#define MAPPING 520
#define MATCH 521
#define MATCHED 522
#define MATERIALIZED 523
#define MAXVALUE 524
#define MERGE 525
#define MERGE_ACTION 526
#define METHOD 527
#define MINUTE_P 528
#define MINVALUE 529
#define MODE 530
#define MONTH_P 531
#define MOVE 532
#define NAME_P 533
#define NAMES 534
#define NATIONAL 535
#define NATURAL 536
#define NCHAR 537
#define NESTED 538
#define NEW 539
#define NEXT 540
#define NFC 541
#define NFD 542
#define NFKC 543
#define NFKD 544
#define NO 545
#define NONE 546
#define NORMALIZE 547
#define NORMALIZED 548
#define NOT 549
#define NOTHING 550
#define NOTIFY 551
#define NOTNULL 552
#define NOWAIT 553
#define NULL_P 554
#define NULLIF 555
#define NULLS_P 556
#define NUMERIC 557
#define OBJECT_P 558
#define OF 559
#define OFF 560
#define OFFSET 561
#define OIDS 562
#define OLD 563
#define OMIT 564
#define ON 565
#define ONLY 566
#define OPERATOR 567
#define OPTION 568
#define OPTIONS 569
#define OR 570
#define ORDER 571
#define ORDINALITY 572
#define OTHERS 573
#define OUT_P 574
#define OUTER_P 575
#define OVER 576
#define OVERLAPS 577
#define OVERLAY 578
#define OVERRIDING 579
#define OWNED 580
#define OWNER 581
#define PARALLEL 582
#define PARAMETER 583
#define PARSER 584
#define PARTIAL 585
#define PARTITION 586
#define PASSING 587
#define PASSWORD 588
#define PATH 589
#define PLACING 590
#define PLAN 591
#define PLANS 592
#define POLICY 593
#define POSITION 594
#define PRECEDING 595
#define PRECISION 596
#define PRESERVE 597
#define PREPARE 598
#define PREPARED 599
#define PRIMARY 600
#define PRIOR 601
#define PRIVILEGES 602
#define PROCEDURAL 603
#define PROCEDURE 604
#define PROCEDURES 605
#define PROGRAM 606
#define PUBLICATION 607
#define QUOTE 608
#define QUOTES 609
#define RANGE 610
#define READ 611
#define REAL 612
#define REASSIGN 613
#define RECHECK 614
#define RECURSIVE 615
#define REF_P 616
#define REFERENCES 617
#define REFERENCING 618
#define REFRESH 619
#define REINDEX 620
#define RELATIVE_P 621
#define RELEASE 622
#define RENAME 623
#define REPEATABLE 624
#define REPLACE 625
#define REPLICA 626
#define RESET 627
#define RESTART 628
#define RESTRICT 629
#define RETURN 630
#define RETURNING 631
#define RETURNS 632
#define REVOKE 633
#define RIGHT 634
#define ROLE 635
#define ROLLBACK 636
#define ROLLUP 637
#define ROUTINE 638
#define ROUTINES 639
#define ROW 640
#define ROWS 641
#define RULE 642
#define SAVEPOINT 643
#define SCALAR 644
#define SCHEMA 645
#define SCHEMAS 646
#define SCROLL 647
#define SEARCH 648
#define SECOND_P 649
#define SECURITY 650
#define SELECT 651
#define SEQUENCE 652
#define SEQUENCES 653
#define SERIALIZABLE 654
#define SERVER 655
#define SESSION 656
#define SESSION_USER 657
#define SET 658
#define SETS 659
#define SETOF 660
#define SHARE 661
#define SHOW 662
#define SIMILAR 663
#define SIMPLE 664
#define SKIP 665
#define SMALLINT 666
#define SNAPSHOT 667
#define SOME 668
#define SOURCE 669
#define SQL_P 670
#define STABLE 671
#define STANDALONE_P 672
#define START 673
#define STATEMENT 674
#define STATISTICS 675
#define STDIN 676
#define STDOUT 677
#define STORAGE 678
#define STORED 679
#define STRICT_P 680
#define STRING_P 681
#define STRIP_P 682
#define SUBSCRIPTION 683
#define SUBSTRING 684
#define SUPPORT 685
#define SYMMETRIC 686
#define SYSID 687
#define SYSTEM_P 688
#define SYSTEM_USER 689
#define TABLE 690
#define TABLES 691
#define TABLESAMPLE 692
#define TABLESPACE 693
#define TARGET 694
#define TEMP 695
#define TEMPLATE 696
#define TEMPORARY 697
#define TEXT_P 698
#define THEN 699
#define TIES 700
#define TIME 701
#define TIMESTAMP 702
#define TO 703
#define TRAILING 704
#define TRANSACTION 705
#define TRANSFORM 706
#define TREAT 707
#define TRIGGER 708
#define TRIM 709
#define TRUE_P 710
#define TRUNCATE 711
#define TRUSTED 712
#define TYPE_P 713
#define TYPES_P 714
#define UESCAPE 715
#define UNBOUNDED 716
#define UNCONDITIONAL 717
#define UNCOMMITTED 718
#define UNENCRYPTED 719
#define UNION 720
#define UNIQUE 721
#define UNKNOWN 722
#define UNLISTEN 723
#define UNLOGGED 724
#define UNTIL 725
#define UPDATE 726
#define USER 727
#define USING 728
#define VACUUM 729
#define VALID 730
#define VALIDATE 731
#define VALIDATOR 732
#define VALUE_P 733
#define VALUES 734
#define VARCHAR 735
#define VARIADIC 736
#define VARYING 737
#define VERBOSE 738
#define VERSION_P 739
#define VIEW 740
#define VIEWS 741
#define VOLATILE 742
#define WHEN 743
#define WHERE 744
#define WHITESPACE_P 745
#define WINDOW 746
#define WITH 747
#define WITHIN 748
#define WITHOUT 749
#define WORK 750
#define WRAPPER 751
#define WRITE 752
#define XML_P 753
#define XMLATTRIBUTES 754
#define XMLCONCAT 755
#define XMLELEMENT 756
#define XMLEXISTS 757
#define XMLFOREST 758
#define XMLNAMESPACES 759
#define XMLPARSE 760
#define XMLPI 761
#define XMLROOT 762
#define XMLSERIALIZE 763
#define XMLTABLE 764
#define YEAR_P 765
#define YES_P 766
#define ZONE 767
#define FORMAT_LA 768
#define NOT_LA 769
#define NULLS_LA 770
#define WITH_LA 771
#define WITHOUT_LA 772
#define MODE_TYPE_NAME 773
#define MODE_PLPGSQL_EXPR 774
#define MODE_PLPGSQL_ASSIGN1 775
#define MODE_PLPGSQL_ASSIGN2 776
#define MODE_PLPGSQL_ASSIGN3 777
#define UMINUS 778




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 233 "gram.y"
{
	core_YYSTYPE core_yystype;
	/* these fields must match core_YYSTYPE: */
	int			ival;
	char	   *str;
	const char *keyword;

	char		chr;
	bool		boolean;
	JoinType	jtype;
	DropBehavior dbehavior;
	OnCommitAction oncommit;
	List	   *list;
	Node	   *node;
	ObjectType	objtype;
	TypeName   *typnam;
	FunctionParameter *fun_param;
	FunctionParameterMode fun_param_mode;
	ObjectWithArgs *objwithargs;
	DefElem	   *defelt;
	SortBy	   *sortby;
	WindowDef  *windef;
	JoinExpr   *jexpr;
	IndexElem  *ielem;
	StatsElem  *selem;
	Alias	   *alias;
	RangeVar   *range;
	IntoClause *into;
	WithClause *with;
	InferClause	*infer;
	OnConflictClause *onconflict;
	A_Indices  *aind;
	ResTarget  *target;
	struct PrivTarget *privtarget;
	AccessPriv *accesspriv;
	struct ImportQual *importqual;
	InsertStmt *istmt;
	VariableSetStmt *vsetstmt;
	PartitionElem *partelem;
	PartitionSpec *partspec;
	PartitionBoundSpec *partboundspec;
	RoleSpec   *rolespec;
	PublicationObjSpec *publicationobjectspec;
	struct SelectLimit *selectlimit;
	SetQuantifier setquantifier;
	struct GroupClause *groupclause;
	MergeMatchKind mergematch;
	MergeWhenClause *mergewhen;
	struct KeyActions *keyactions;
	struct KeyAction *keyaction;
}
/* Line 1529 of yacc.c.  */
#line 1147 "gram.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

