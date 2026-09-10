// Address: 00472f44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472f44(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if ((char)param_1[0x1a] == '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    puStack_1c = &LAB_0047303c;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if ((char)param_2 != *(char *)((int)param_1 + 0x69)) {
      iVar4 = *(int *)(param_1[0x14] + 8);
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        puStack_18 = &stack0xfffffffc;
        do {
          piVar2 = (int *)FUN_00403c34(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                       PTR_PTR_00472568);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x50))(piVar2,param_2);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(char *)((int)param_1 + 0x69) = (char)param_2;
      if ((0 < param_1[0x1b]) && (*(char *)((int)param_1 + 0x69) != '\0')) {
        iVar4 = FUN_0047299c(param_1[0x17]);
        if (-1 < iVar4 + -1) {
          iVar3 = 0;
          do {
            piVar2 = (int *)FUN_00472988(param_1[0x17],iVar3);
            if (piVar2 != param_1) {
              cVar1 = FUN_00403c10(piVar2,PTR_PTR_00472158);
              if ((cVar1 != '\0') && (piVar2[0x1b] == param_1[0x1b])) {
                FUN_00472f44(piVar2,0);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      (**(code **)(*param_1 + 0x30))();
    }
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    return;
  }
  return;
}

