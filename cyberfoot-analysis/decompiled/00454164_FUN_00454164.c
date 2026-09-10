// Address: 00454164
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454164(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  int *piStack_3c;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [12];
  int *local_10;
  int *local_8;
  
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    piStack_3c = (int *)local_1c;
    puStack_40 = (undefined1 *)0x45418d;
    iVar3 = FUN_004673cc(param_1,0x417,param_2);
    if (iVar3 != 0) {
      piStack_3c = &local_2c;
      puStack_40 = (undefined1 *)0x4541a7;
      iVar3 = FUN_004673cc(param_1,0x41d,param_2);
      if (iVar3 != 0) {
        local_8 = local_10;
        piStack_3c = (int *)0x4541c3;
        cVar2 = FUN_00403c10(local_10,PTR_PTR_004481e0);
        if (cVar2 != '\0') {
          piStack_3c = (int *)0x4541d4;
          (**(code **)(*local_8 + 0x90))();
        }
        puStack_40 = &LAB_00454287;
        uStack_44 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_44;
        piStack_3c = (int *)&stack0xfffffffc;
        FUN_00403c10(local_8,PTR_PTR_004481e0);
        if (cVar2 == '\0') {
          cVar2 = FUN_00403c10(local_8,PTR_PTR_00461f94);
          if (cVar2 != '\0') {
            FUN_0046cabc(param_1);
          }
          FUN_00465bc8(local_8,&local_2c);
          iVar3 = local_8[0x13];
          if (iVar3 < local_20 - local_28) {
            uVar4 = (local_20 - local_28) - iVar3;
            iVar5 = (int)uVar4 >> 1;
            if (iVar5 < 0) {
              iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
            }
            (**(code **)(*local_8 + 0x84))
                      (local_8,local_2c,local_28 + iVar5,iVar3,local_24 - local_2c);
          }
        }
        else {
          FUN_00465bc8(local_8,&local_2c);
        }
        piVar1 = piStack_3c;
        *in_FS_OFFSET = uStack_44;
        piStack_3c = (int *)0x45428e;
        puStack_40 = (undefined1 *)0x454277;
        cVar2 = FUN_00403c10(local_8,PTR_PTR_004481e0,piVar1);
        if (cVar2 != '\0') {
          puStack_40 = (undefined1 *)0x454286;
          (**(code **)(*local_8 + 0x94))();
        }
        return;
      }
    }
  }
  return;
}

