// Address: 00417254
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00417254(uint param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar4;
  undefined4 uStack_224;
  undefined1 *puStack_220;
  undefined1 *puStack_21c;
  undefined4 local_20c;
  undefined1 local_208 [256];
  undefined1 local_108 [256];
  undefined4 *local_8;
  ushort uVar3;
  
  puStack_21c = &stack0xfffffffc;
  local_20c = 0;
  puStack_220 = &LAB_0041737a;
  uStack_224 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_224;
  uVar3 = (ushort)param_1;
  uVar2 = uVar3 & 0xfff;
  if (uVar2 < 0x15) {
    puStack_21c = &stack0xfffffffc;
    FUN_00404928(param_2,(&PTR_s_Empty_00662518)[uVar2]);
  }
  else if (uVar3 == 0x100) {
    puStack_21c = &stack0xfffffffc;
    FUN_00404928(param_2,"String");
  }
  else if (uVar3 == 0x101) {
    puStack_21c = &stack0xfffffffc;
    FUN_00404928(param_2,&DAT_004173a0);
  }
  else {
    cVar1 = FUN_00418f24(param_1,&local_8);
    if (cVar1 == '\0') {
      FUN_00409fd0(uVar2,4,&local_20c);
      FUN_00404bf0(param_2,*(undefined4 *)PTR_PTR_0066b658,local_20c);
    }
    else {
      puVar4 = local_108;
      FUN_004039d4(*local_8,local_208);
      FUN_004029a0(local_208,2,0x7fffffff,puVar4);
      FUN_00404b48(param_2,local_108);
    }
  }
  if ((param_1 & 0x2000) != 0) {
    FUN_00404bf0(param_2,"Array ",*param_2);
  }
  if ((param_1 & 0x4000) != 0) {
    FUN_00404bf0(param_2,"ByRef ",*param_2);
  }
  puVar4 = puStack_21c;
  *in_FS_OFFSET = uStack_224;
  puStack_21c = &LAB_00417381;
  puStack_220 = (undefined1 *)0x417379;
  FUN_004048d4(&local_20c,uStack_224,puVar4);
  return;
}

