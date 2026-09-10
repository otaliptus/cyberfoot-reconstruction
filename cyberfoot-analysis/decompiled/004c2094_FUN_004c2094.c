// Address: 004c2094
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c2094(short *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004c2190;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = (int)*param_1 + (uint)(ushort)param_1[1] + (uint)(ushort)param_1[2];
  iVar4 = iVar3 + (uint)(ushort)param_1[3] + (uint)(ushort)param_1[4] + (uint)(ushort)param_1[5];
  puVar1 = &stack0xfffffffc;
  if (iVar4 < 1) goto LAB_004c2175;
  puVar1 = &stack0xfffffffc;
  if (0 < iVar3) {
    puVar1 = &stack0xfffffffc;
    if ((((*param_1 != 0) && (puVar1 = &stack0xfffffffc, param_1[1] != 0)) &&
        (puVar1 = &stack0xfffffffc, param_1[2] != 0)) &&
       (puVar1 = &stack0xfffffffc, (ushort)param_1[1] < 0x20)) {
      uVar2 = FUN_004bc3f4(*param_1,CONCAT22((short)((uint)iVar4 >> 0x10),param_1[1]));
      puVar1 = puStack_18;
      if ((ushort)param_1[2] <= uVar2) goto LAB_004c212b;
    }
    puStack_18 = puVar1;
    FUN_00406d44(PTR_LAB_0066b744,&local_8);
    FUN_0040e370(PTR_DAT_00408d90,1,local_8);
    FUN_00404250();
    puVar1 = puStack_18;
  }
LAB_004c212b:
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  if (((uint)(ushort)param_1[3] + (uint)(ushort)param_1[4] + (uint)(ushort)param_1[5] != 0) &&
     (((0x17 < (ushort)param_1[3] || (0x3b < (ushort)param_1[5])) || (0x3b < (ushort)param_1[4]))))
  {
    FUN_00406d44(PTR_LAB_0066b744,&local_c);
    FUN_0040e370(PTR_DAT_00408d90,1,local_c);
    FUN_00404250();
    puVar1 = puStack_18;
  }
LAB_004c2175:
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c2197;
  puStack_1c = (undefined1 *)0x4c218f;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

