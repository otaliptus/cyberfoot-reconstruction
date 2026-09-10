// Address: 0047304c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047304c(int *param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != *(char *)((int)param_1 + 0x6a)) {
    if (param_1[0x17] != 0) {
      cVar1 = *(char *)(param_1[0x17] + 0x58);
      if (cVar1 == '\x01') {
        *(char *)((int)param_1 + 0x6a) = param_2;
        return;
      }
      if (cVar1 == '\x02') {
        param_2 = '\x01';
      }
    }
    iVar3 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        piVar2 = (int *)FUN_00403c34(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar4 * 4),
                                     PTR_PTR_00472568);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x54))(piVar2,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(char *)((int)param_1 + 0x6a) = param_2;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}

