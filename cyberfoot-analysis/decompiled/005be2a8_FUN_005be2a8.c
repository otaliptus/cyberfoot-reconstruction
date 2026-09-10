// Address: 005be2a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005be2a8(int param_1)

{
  int *piVar1;
  LPVOID *ppvVar2;
  undefined4 uVar3;
  HRESULT HVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined *local_10;
  int *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (int *)0x0;
  local_10 = (undefined *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_20 = &LAB_005be3c2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(int *)(*(int *)(param_1 + 0x208) + 0x28) != 0)
     ) {
    puStack_1c = &stack0xfffffffc;
    ppvVar2 = (LPVOID *)FUN_00406880(&local_c);
    CoGetClassObject(*(IID **)(local_8 + 0x208),5,(LPVOID)0x0,(IID *)&DAT_005be3d0,ppvVar2);
    FUN_004ac7a4();
    FUN_00405158(&local_10,*(undefined4 *)(*(int *)(local_8 + 0x208) + 0x28));
    FUN_00406d44(PTR_PTR_0066ad54,&local_14);
    uVar7 = local_14;
    ppvVar2 = (LPVOID *)FUN_00406880(local_8 + 0x218);
    piVar1 = local_c;
    uVar5 = 0;
    puVar6 = local_10;
    uVar3 = (**(code **)(*local_c + 0x1c))();
    func_0x005be250(uVar3,piVar1);
  }
  else {
    FUN_00406d44(PTR_PTR_0066b584,&local_18,0,&stack0xfffffffc);
    uVar3 = local_18;
    ppvVar2 = (LPVOID *)FUN_00406880(local_8 + 0x218);
    puVar6 = &DAT_005be3e0;
    uVar5 = 0;
    HVar4 = CoCreateInstance(*(IID **)(local_8 + 0x208),(LPUNKNOWN)0x0,5,(IID *)&DAT_005be3e0,
                             ppvVar2);
    uVar7 = 0x5be396;
    func_0x005be250(HVar4,uVar3);
  }
  *in_FS_OFFSET = uVar5;
  FUN_004048f8(&local_18,2,puVar6,&LAB_005be3c9,ppvVar2,uVar7);
  FUN_00404ff0(&local_10);
  FUN_00406880(&local_c);
  return;
}

