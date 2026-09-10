// Address: 00653148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00653148(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_14 = 0;
  puStack_20 = (undefined1 *)0x653168;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_20 = (undefined1 *)0x653170;
  FUN_00404d94(local_c);
  puStack_24 = &LAB_006531e3;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00487b04(*(undefined4 *)PTR_DAT_0066b3ac,&local_14);
  FUN_0040a5fc(local_14,&local_10);
  FUN_00404bac(&local_10,"cyberfoot.ini");
  puVar2 = (undefined4 *)FUN_00440828(PTR_PTR_00440778,1,local_10);
  (**(code **)*puVar2)(puVar2,local_8,local_c,param_3,"nofound");
  puVar1 = puStack_28;
  *in_FS_OFFSET = param_3;
  puStack_28 = &LAB_006531ea;
  FUN_004048f8(&local_14,4,puVar1);
  return;
}

