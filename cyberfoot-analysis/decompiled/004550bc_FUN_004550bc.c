// Address: 004550bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004550bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_c;
  
  puStack_18 = (undefined1 *)param_4;
  puStack_1c = (undefined1 *)0x4550d7;
  local_c = FUN_00454f70(param_1,param_2);
  if (param_2 != local_c) {
    if (param_2 < local_c) {
      local_c = local_c + -1;
    }
    puStack_18 = (undefined1 *)0x4550fb;
    uVar2 = FUN_0041e01c(*(undefined4 *)(param_1 + 0x218),param_2);
    puStack_18 = (undefined1 *)0x45510d;
    FUN_0041df0c(*(undefined4 *)(param_1 + 0x218),param_2);
    puStack_18 = (undefined1 *)0x455120;
    FUN_0041e098(*(undefined4 *)(param_1 + 0x218),local_c,uVar2);
    puStack_18 = (undefined1 *)0x455128;
    FUN_00454f14(param_1);
    puStack_1c = &LAB_00455171;
    iStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_004673cc(param_1,0x416,param_2,0);
    FUN_00454448(param_1,0x415,local_c);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = local_c;
    puStack_1c = (undefined1 *)0x455178;
    iStack_20 = 0x455170;
    iVar3 = FUN_00454f1c(param_1,local_c,puVar1);
    return iVar3;
  }
  return local_c;
}

