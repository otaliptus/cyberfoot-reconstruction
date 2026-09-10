// Address: 0042cf00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042cf00(undefined4 param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x42cf17;
    param_1 = FUN_00403de8();
  }
  puStack_34 = &LAB_0042cfdd;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00403a54(param_1,0);
  uVar3 = 0;
  puVar1 = PTR_LAB_00429238;
  FUN_00406d44(PTR_PTR_0066b24c,&local_8);
  FUN_0042d080(param_1,&DAT_0042d00c,local_8,puVar1,uVar3);
  uVar3 = 0;
  puVar1 = PTR_LAB_00429238;
  FUN_00406d44(PTR_PTR_0066ae0c,&local_c);
  FUN_0042d080(param_1,&DAT_0042d018,local_c,puVar1,uVar3);
  uVar3 = 0;
  puVar2 = PTR_LAB_004294bc;
  FUN_00406d44(PTR_PTR_0066ae08,&local_10);
  FUN_0042d080(param_1,&DAT_0042d024,local_10,puVar2,uVar3);
  uVar3 = 0;
  puVar1 = PTR_PTR_00429378;
  FUN_00406d44(PTR_PTR_0066adf8,&local_14);
  FUN_0042d080(param_1,&LAB_0042d030,local_14,puVar1,uVar3);
  *in_FS_OFFSET = puVar1;
  FUN_004048f8(&local_14,4,puVar2,&LAB_0042cfe4);
  return;
}

